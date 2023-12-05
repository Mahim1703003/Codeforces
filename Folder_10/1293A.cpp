#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int t,n,s,k,x,inc,dec,step=0;
    inc = 10;
    dec = 10;
    cin>>t;
    while(t--)
    {
        cin>>n>>s>>k;
        while(k--)
        {
            cin>>x;
            m[x]++;
        }
        if(m[s]==0)
            cout<<"0\n";
        else
        {
            inc = s;
            dec = s;
            while(1)
            {
                step++;
                if(inc+1<=n)
                    inc++;
                if(dec-1>=1)
                    dec--;
                if(m[inc]==0 || m[dec]==0)
                    break;
            }
            cout<<step<<"\n";
        }
        m.clear();
        step = 0;
    }
    return 0;
}
