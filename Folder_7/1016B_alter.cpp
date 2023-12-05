#include<iostream>
#include<map>
#include<utility>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map < pair <int,int> , int > mlr;
    map <int,char> ms,mf;
    string s,t;
    int n,m,q,l,r,i,j,in,k=0,ss=0,ff=0;
    cin>>n>>m>>q;
    cin>>s>>t;
    if(m<=n)
    {
        s = " " + s;
        t = " " + t;
        for(i=1;i<=n-m+1;i++)
        {
            for(j=i,in=1;j<=i+m-1;j++,in++)
            {
                if(s[j]!=t[in])
                {
                    k++;
                    break;
                }
            }
            if(k==0)
            {
                j--;
                ms[i] = 's';
                mf[j] = 'f';
            }
            k = 0;
        }
        for(i=1;i<=n;i++)
        {
            for(j=i;j<=n;j++)
            {
                if(ms[j]=='s')
                    ss++;
                if(j-i+1>=m&&mf[j]=='f')
                    ff++;
                mlr[{i,j}] = min(ss,ff);
            }
            ss = 0;
            ff = 0;
        }
    }
    while(q--)
    {
        cin>>l>>r;
        cout<<mlr[{l,r}]<<"\n";
    }
    return 0;
}
