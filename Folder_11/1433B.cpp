#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,last=-1,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                if(last==-1)
                    last = i;
                else
                {
                    sum = sum + (i-last-1);
                    last = i;
                }
            }
        }
        cout<<sum<<"\n";
        last = -1;
        sum = 0;
    }
    return 0;
}
