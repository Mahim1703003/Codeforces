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
    int t,n,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=2*n;i++)
        {
            cin>>x;
            m[x]++;
            if(m[x]==1)
                v.push_back(x);
        }
        for(i=0;i<=v.size()-1;i++)
            cout<<v[i]<<" ";
        cout<<"\n";
        m.clear();
        v.clear();
    }
    return 0;
}
