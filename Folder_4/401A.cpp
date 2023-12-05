#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,x,i,sum=0,card;
    cin>>n>>x;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    sum=abs(sum);
    card=sum/x;
    if(sum%x!=0)
        card++;
    cout<<card<<endl;
    return 0;
}
