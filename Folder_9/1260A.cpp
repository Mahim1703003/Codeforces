#include<iostream>
using namespace std;
int main()
{
    int t,ci,sumi,div,rem,ans;
    cin>>t;
    while(t--)
    {
        cin>>ci>>sumi;
        div = sumi / ci;
        rem = sumi % ci;
        ans = rem*(div+1)*(div+1) + (ci-rem)*div*div;
        cout<<ans<<endl;
    }
    return 0;
}
