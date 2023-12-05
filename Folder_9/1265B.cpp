#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v1,v2,v;
    map <int,int> m;
    int t,n,i,j,p,l1,l2,max_num=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
                p = i;
        }
        for(i=p+1;i<=n;i++)
            v1.push_back(a[i]);
        for(i=p-1;i>=1;i--)
            v2.push_back(a[i]);
        l1 = v1.size();
        l2 = v2.size();
        i = 0;
        j = 0;
        v.push_back(0);
        v.push_back(1);
        while(i<=l1-1&&j<=l2-1)
        {
            if(v1[i]<v2[j])
            {
                v.push_back(v1[i]);
                i++;
            }
            else
            {
                v.push_back(v2[j]);
                j++;
            }
        }
        while(i<=l1-1)
        {
            v.push_back(v1[i]);
            i++;
        }
        while(j<=l2-1)
        {
            v.push_back(v2[j]);
            j++;
        }
        for(i=1;i<=n;i++)
        {
            max_num = max(max_num,v[i]);
            if(max_num<=i)
                m[max_num]++;
        }
        for(i=1;i<=n;i++)
        {
            if(m[i]!=0)
                cout<<"1";
            else
                cout<<"0";
        }
        cout<<"\n";
        v1.clear();
        v2.clear();
        v.clear();
        m.clear();
        max_num = 0;
    }
    return 0;
}
