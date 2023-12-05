#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,i,k=0;
    long long int a,b,add;
    cin>>t;
    int c[t];
    for(i=0;i<=t-1;i++)
    {
        cin>>a>>b;
        if(a-b==1){
        add=a+b;
        if(add==2)
            k=0;
        else if(add%2==0)
            k++;
        else
        {
            int j;
            for(j=3;j<=sqrt(add);j=j+2)
            {
                if(add%j==0)
                {
                    k++;
                    break;
                }
            }
        }
        if(k==0)
            c[i]=0;
        else
            c[i]=1;
        k=0;
        }
        else
            c[i]=1;
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
