#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int q,i,l,r,ans,remainder,sum;
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>l>>r;
        sum=((l*pow(-1,l))+(r*pow(-1,r)));
        ans=sum/2;
        remainder=sum%2;
        if(remainder<0)
            ans--;
        else if(remainder>0)
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}
