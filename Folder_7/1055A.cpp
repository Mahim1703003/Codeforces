#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,s,i,k=0;
    cin>>n>>s;
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-1;i++)
        cin>>b[i];
    if(a[0]==1)
    {
        if(a[s-1]==1)
            cout<<"YES\n";
        else
        {
            for(i=s;i<=n-1;i++)
            {
                if(a[i]==1 && b[i]==1)
                {
                    k++;
                    break;
                }
            }
            if(k!=0)
            {
                if(b[s-1]==1)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
            else
                cout<<"NO\n";
        }
    }
    else
        cout<<"NO\n";
    return 0;
}
