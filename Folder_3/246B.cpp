#include<iostream>
using namespace std;
int main()
{
    int n,x,i,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        sum = sum + x;
    }
    if(sum%n==0)
        cout<<n<<endl;
    else
        cout<<n-1<<endl;
    return 0;
}
