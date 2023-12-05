#include<iostream>
using namespace std;
int main()
{
    int n,v;
    cin>>n>>v;
    if(n<=v)
        cout<<n-1<<endl;
    else
    {
        int i,sum=0;
        for(i=1;i<=n-v;i++)
        {
            if(i==1)
                sum = sum + v;
            else
                sum = sum + i;
        }
        cout<<sum<<endl;
    }
    return 0;
}
