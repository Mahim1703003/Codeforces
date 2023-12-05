#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    vector <int> v;
    int t,n,x,y,k,i,j,f=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
            m[i] = 0;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            for(j=1;j<=x;j++)
            {
                cin>>y;
                if(m[y]==0&&f==0)
                {
                    f++;
                    m[y]++;
                }
            }
            if(f==0)
                v.push_back(i);
            f = 0;
        }
        if(v.size()==0)
            cout<<"OPTIMAL\n";
        else
        {
            cout<<"IMPROVE\n";
            for(i=1;i<=n;i++)
            {
                if(m[i]==0)
                    break;
            }
            cout<<v[0]<<" "<<i<<"\n";
        }
        m.clear();
        v.clear();
        f = 0;
    }
}
