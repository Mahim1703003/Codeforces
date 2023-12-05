#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,x,suma=0,sumb=0,a[6]={0},b[6]={0},k=0;
    cin>>n;
    for(i=0;i<=n-1;i++)
    {
        cin>>x;
        a[x]++;
    }
    for(i=0;i<=n-1;i++)
    {
        cin>>x;
        b[x]++;
    }
    for(i=1;i<=5;i++)
    {
        if((a[i]+b[i])%2!=0)
        {
            k++;
            break;
        }
    }
    if(k!=0)
        cout<<"-1\n";
    else
    {
        for(i=1;i<=5;i++)
        {
            if(a[i]>b[i])
                suma = suma + (a[i]-b[i]);
            else if(b[i]>a[i])
                sumb = sumb + (b[i]-a[i]);
        }
        if(suma==sumb)
            cout<<suma/2<<"\n";
        else
            cout<<"-1\n";
    }
    return 0;
}
