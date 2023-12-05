#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,i,j,k,sumi=0,sumj=0,ans;
    cin>>n;
    int a[n+2];
    a[0] = 1;
    a[n+1] = 1e6;
    for(i=1;i<=n;i++)
        cin>>a[i];
    i = 0;
    j = n+1;
    for(k=1;k<=n;k++)
    {
        if(j-i==1)
            break;
        sumi = sumi + (a[k]-a[i]);
        sumj = sumj + (a[j]-a[k]);
        if(sumi<=sumj)
        {
            i = k;
            sumj = sumj - (a[j]-a[k]);
        }
        else
        {
            j = k;
            sumi = sumi - (a[k]-a[i]);
        }
    }
    ans = max(sumi,sumj);
    cout<<ans<<"\n";
    return 0;
}
