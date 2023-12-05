#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char ch;
    long long int t,n,m,x,y,k=0,opt1=0,opt2=0,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>x>>y;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cin>>ch;
                if(ch=='.')
                {
                    k++;
                    if(j==m)
                    {
                        opt1 = opt1 + (k*x);
                        opt2 = opt2 + ((k/2)*y+(k%2)*x);
                    }
                }
                else
                {
                    opt1 = opt1 + (k*x);
                    opt2 = opt2 + ((k/2)*y+(k%2)*x);
                    k = 0;
                }
            }
            k = 0;
        }
        cout<<min(opt1,opt2)<<"\n";
        opt1 = 0;
        opt2 = 0;
        k = 0;
    }
    return 0;
}

