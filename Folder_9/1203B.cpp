#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,j,ct=0,area;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[4*n+1];
        for(i=1;i<=4*n;i++)
            cin>>a[i];
        sort(a+1,a+4*n+1);
        for(i=1;i<=4*n-1;i=i+2)
        {
            if(a[i]!=a[i+1])
            {
                ct++;
                break;
            }
        }
        if(ct)
            cout<<"NO\n";
        else
        {
            for(i=1,j=4*n;i<j;i=i+2,j=j-2)
            {
                if(i==1)
                    area = a[i]*a[j];
                else
                {
                    if(a[i]*a[j]!=area)
                    {
                        ct++;
                        break;
                    }
                }
            }
            if(ct)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
        ct = 0;
    }
    return 0;
}
