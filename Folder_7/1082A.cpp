#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    long long int n,x,y,d,t,i,ans,l;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>x>>y>>d;
        l=abs(x-y);
        if(l<d)
        {
            long long int a,b,ans1,ans2;
            a=(x+d-1)/d;
            if((x+d-1)%d==0)
                a--;
            b=(y-1+d)/d;
            if((y-1+d)%d==0)
            {
                b--;
                ans1=a+b;
            }
            else
                ans1=-1;
            a=(n-x+d)/d;
            if((n-x+d)%d==0)
                a--;
            b=(n+d-y)/d;
            if((n+d-y)%d==0)
            {
                b--;
                ans2=a+b;
            }
            else
                ans2=-1;
            ans=(ans1>ans2)?ans1:ans2;
            cout<<ans<<endl;
        }
        else
        {
            if(y>=x){
            ans=(y-x+d)/d;
            if((y-x+d)%d==0){
                ans--;
                cout<<ans<<endl;
            }
            else
                cout<<"-1\n";
            }
            else
            {
                ans=(x+d-y)/d;
                if((x+d-y)%d==0){
                    ans--;
                    cout<<ans<<endl;
                }
                else
                    cout<<"-1\n";
            }
        }
    }
    return 0;
}