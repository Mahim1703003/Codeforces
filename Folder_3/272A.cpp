#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i,x,k=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        sum = sum + x;
    }
    for(i=1;i<=5;i++)
    {
        sum = sum + i;
        if(sum%(n+1)!=1)
            k++;
        sum = sum - i;
    }
    cout<<k<<endl;
    return 0;
}
