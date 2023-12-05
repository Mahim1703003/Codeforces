#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,i,k=0;
    cin>>n>>m;
    int a[m];
    for(i=0;i<=m-1;i++)
        cin>>a[i];
    if(m==0)
        cout<<"YES\n";
    else
    {
        sort(a,a+m);
        if(a[0]==1 || a[m-1]==n)
            cout<<"NO\n";
        else
        {
            for(i=2;i<=m-1;i++)
            {
                if(a[i]-a[i-1]==1 && a[i]-a[i-2]==2)
                {
                    k++;
                    break;
                }
            }
            if(k!=0)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
    }
    return 0;
}
