#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int t,n,n1,n2,i,j,sum=0,max_team=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        for(i=2;i<=n+n;i++)
        {
            for(j=1;j<=i/2;j++)
            {
                n1 = j;
                n2 = i - j;
                if(n1==n2)
                    sum = sum + m[n1]/2;
                else
                    sum = sum + min(m[n1],m[n2]);
            }
            max_team = max(max_team,sum);
            sum = 0;
        }
        cout<<max_team<<"\n";
        sum = 0;
        max_team = 0;
        m.clear();
    }
    return 0;
}
