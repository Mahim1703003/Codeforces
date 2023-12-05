#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,i,j,k,suma=0,sumb=0,ans;
    cin>>n;
    long long int a[n],b[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-1;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    i = n-1;
    j = n-1;
    for(k=1;;k++)
    {
        if(k%2==1)
        {
            if(i>=0&&j>=0)
            {
                if(a[i]>=b[j])
                {
                    suma = suma + a[i];
                    i--;
                }
                else
                    j--;
            }
            else
            {
                if(i>=0)
                {
                    suma = suma + a[i];
                    i--;
                }
                if(j>=0)
                    j--;
            }
        }
        else
        {
            if(i>=0&&j>=0)
            {
                if(b[j]>=a[i])
                {
                    sumb = sumb + b[j];
                    j--;
                }
                else
                    i--;
            }
            else
            {
                if(j>=0)
                {
                    sumb = sumb + b[j];
                    j--;
                }
                if(i>=0)
                    i--;
            }
        }
        if(i<0&&j<0)
            break;
    }
    ans = suma - sumb;
    cout<<ans<<"\n";
    return 0;
}
