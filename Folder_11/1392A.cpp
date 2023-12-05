#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int t,n,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            m[x]++;
        }
        if(m.size()==1)
            cout<<n<<"\n";
        else
            cout<<"1\n";
        m.clear();
    }
    return 0;
}
