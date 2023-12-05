#include<iostream>
using namespace std;
int main()
{
    int n,i,x,sum=0,even=0,odd=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        sum=sum+x;
        if(x%2==0)
            even++;
        else
            odd++;
    }
    if(sum%2==0)
        cout<<even<<endl;
    else
        cout<<odd<<endl;
    return 0;
}
