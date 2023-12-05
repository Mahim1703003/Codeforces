#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int a,b;
    long double diff;
    long long int n,m;
    int t,i,j,k=0;
    cin>>t;
    int c[t];
    for(i=0;i<=t-1;i++)
    {
        cin>>a>>b;
        diff=pow(a,2)-pow(b,2);
        m=(int)diff;
        for(j=2;j*j<=(diff);j+=1)
        {
            if(fmod(diff,j)==0)
            {
                k++;
                break;
            }
        }
        if(k==0)
            c[i]=0;
        else
            c[i]=1;
        k=0;
    }
    for(i=0;i<=t-1;i++)
    {
        if(c[i]==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
