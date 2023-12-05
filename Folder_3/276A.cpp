#include<iostream>
using namespace std;
int main()
{
    int n,k,i,temp;
    cin>>n>>k;
    int f[n],t[n],mf[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>f[i]>>t[i];
        if(t[i]<=k)
            mf[i]=f[i];
        else
            mf[i]=f[i]-(t[i]-k);
    }
    for(i=1;i<=n-1;i++)
    {
        if(mf[i]>mf[0])
        {
            temp=mf[0];
            mf[0]=mf[i];
            mf[i]=temp;
        }
    }
    cout<<mf[0]<<endl;
    return 0;
}
