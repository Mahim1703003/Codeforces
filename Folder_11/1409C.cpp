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
    int t,n,x,y,a,d,i,number;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y;
        for(a=1;a<=x;a++)
        {
            for(d=1;d<=y-x;d++)
            {
                for(i=1;i<=n;i++)
                {
                    number = a + (i-1)*d;
                    m[number]++;
                }
                if(m[x]==1&&m[y]==1)
                {
                    if(v.size()==0)
                    {
                        for(i=1;i<=n;i++)
                            v.push_back(a+(i-1)*d);
                    }
                    else
                    {
                        number = a + (n-1)*d;
                        if(number<v[n-1])
                        {
                            for(i=1;i<=n;i++)
                                v[i-1] = a + (i-1)*d;
                        }
                    }
                }
                m.clear();
            }
        }
        for(i=0;i<=n-1;i++)
            cout<<v[i]<<" ";
        cout<<"\n";
        m.clear();
        v.clear();
    }
    return 0;
}
