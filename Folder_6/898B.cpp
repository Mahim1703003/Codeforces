#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,a,b,ma,mi,div1,div2,rem,k=0;
    cin>>n>>a>>b;
    ma = max(a,b);
    mi = min(a,b);
    div1 = n / ma;
    while(div1>=0)
    {
        rem = n - (ma*div1);
        if(rem%mi==0)
        {
            div2 = rem / mi;
            k++;
            break;
        }
        div1--;
    }
    if(k!=0)
    {
        cout<<"YES\n";
        if(a==ma)
            cout<<div1<<" "<<div2<<"\n";
        else
            cout<<div2<<" "<<div1<<"\n";
    }
    else
        cout<<"NO\n";
    return 0;
}
