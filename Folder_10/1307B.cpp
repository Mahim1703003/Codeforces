#include<iostream>
#include<map>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int t,n,x,i,max_len=0,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int a[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            max_len = max(max_len,a[i]);
            m[a[i]]++;
        }
        if(m[x]!=0)
            cout<<"1\n";
        else
        {
            if(max_len>x)
                cout<<"2\n";
            else
            {
                d = ceil((x*1.0)/(max_len*1.0));
                cout<<d<<"\n";
            }
        }
        max_len = 0;
        m.clear();
    }
    return 0;
}
