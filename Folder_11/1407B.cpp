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
    int t,n,i,j,x,max_gcd=0,max_number,k=0,index;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            if(i==0)
            {
                x = a[i];
                index = i;
            }
            else
            {
                if(a[i]>x)
                {
                    x = a[i];
                    index = i;
                }
            }
        }
        a[index] = -1;
        v.push_back(x);
        for(j=1;j<=n-1;j++)
        {
            for(i=0;i<=n-1;i++)
            {
                if(a[i]==-1)
                    continue;
                if(k==0)
                {
                    k++;
                    if(__gcd(x,a[i])>max_gcd)
                    {
                        max_gcd = __gcd(x,a[i]);
                        max_number = a[i];
                        index = i;
                    }
                }
                else
                {
                    if(__gcd(x,a[i])>max_gcd)
                    {
                        max_gcd = __gcd(x,a[i]);
                        max_number = a[i];
                        index = i;
                    }
                }
            }
            v.push_back(max_number);
            x = __gcd(x,max_number);
            a[index] = -1;
            k = 0;
            max_gcd = 0;
        }
        for(i=0;i<=v.size()-1;i++)
            cout<<v[i]<<" ";
        cout<<"\n";
        v.clear();
        k = 0;
        max_gcd = 0;
    }
    return 0;
}
