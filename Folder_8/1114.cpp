#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x,y,z,a,b,c,sum,k=0;
    cin>>x>>y>>z>>a>>b>>c;
    sum = a + b;
    if(a>=x)
    {
        k++;
        sum = sum - x;
        if(sum>=y)
        {
            k++;
            sum = sum - y;
            if(sum+c>=z)
                k++;
        }
    }
    if(k==3)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
