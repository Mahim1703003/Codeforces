#include<iostream>
using namespace std;
int main()
{
    int n,k,x,remainder,div,ans,i;
    cin>>n>>k;
    if(n>=k)
    {
        for(i=1;i>=0;i++)
        {
            if(i>=k)
                break;
            if(n%i==0)
            {
                remainder=i;
                div=n/i;
            }
        }
        ans=(k*div)+remainder;
        cout<<ans<<endl;
    }
    else
        cout<<n+k<<endl;
    /*x=k+1;
    while(((x/k)*(x%k))!=n)
        x++;
    cout<<x<<endl;
    return 0;*/
    return 0;
}
