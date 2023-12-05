#include<iostream>
using namespace std;
int main()
{
    int q,n,i,x,div;
    long long sum = 0;
    cin>>q;
    while(q--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            sum = sum + x;
        }
        div = sum / n;
        if(sum%n!=0)
            div++;
        cout<<div<<endl;
        sum = 0;
    }
    return 0;
}
