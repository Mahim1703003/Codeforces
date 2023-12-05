#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int n,m,k,i,j,l=0,p=0,sum=0;
    cin>>n>>m>>k;
    int a[m+1],f[25],b[25];
    memset(f,0,sizeof(f));
    memset(b,0,sizeof(b));
    for(i=0;i<=m;i++)
        cin>>a[i];
    while(a[m])
    {
        f[l] = a[m] % 2;
        a[m] = a[m] / 2;
        l++;
    }
    reverse(f,f+25);
    l = 0;
    for(i=0;i<=m-1;i++)
    {
        while(a[i])
        {
            b[l] = a[i] % 2;
            a[i] = a[i] / 2;
            l++;
        }
        reverse(b,b+25);
        for(j=0;j<=24;j++)
        {
            if(f[j]!=b[j])
                p++;
        }
        if(p<=k)
            sum++;

        l = 0;
        p = 0;
        memset(b,0,sizeof(b));
    }
    cout<<sum<<endl;
    return 0;
}
