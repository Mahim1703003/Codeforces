#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v;
    int t,n,m,i,in1=-1,in2=-1,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],l[n];
        for(i=0;i<=n-1;i++)
            cin>>a[i];
        for(i=0;i<=n-1;i++)
        {
            cin>>l[i];
            if(l[i]==0)
                v.push_back(a[i]);
        }
        if(v.size()!=0)
        {
            sort(v.begin(),v.end());
            m = 0;
            for(i=0;i<=n-1;i++)
            {
                if(l[i]==0)
                {
                    sum = sum + v[m];
                    m++;
                }
                else
                    sum = sum + a[i];
                if(sum<0)
                    in1 = i;
            }
            in1++;
            reverse(v.begin(),v.end());
            sum = 0;
            m = 0;
            for(i=0;i<=n-1;i++)
            {
                if(l[i]==0)
                {
                    sum = sum + v[m];
                    m++;
                }
                else
                    sum = sum + a[i];
                if(sum<0)
                    in2 = i;
            }
            in2++;
            m = 0;
            if(in1<=in2)
            {
                reverse(v.begin(),v.end());
                m = 0;
                for(i=0;i<=n-1;i++)
                {
                    if(l[i]==0)
                    {
                        cout<<v[m]<<" ";
                        m++;
                    }
                    else
                        cout<<a[i]<<" ";
                }
                cout<<"\n";
            }
            else
            {
                m = 0;
                for(i=0;i<=n-1;i++)
                {
                    if(l[i]==0)
                    {
                        cout<<v[m]<<" ";
                        m++;
                    }
                    else
                        cout<<a[i]<<" ";
                }
                cout<<"\n";
            }
        }
        else
        {
            for(i=0;i<=n-1;i++)
                cout<<a[i]<<" ";
            cout<<"\n";
        }
        v.clear();
        in1 = -1;
        in2 = -1;
        sum = 0;
    }
    return 0;
}
