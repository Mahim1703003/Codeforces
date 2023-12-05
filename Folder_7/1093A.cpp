#include<iostream>
using namespace std;
int main()
{
    int t,i,n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        if(n%7==0)
            cout<<n/7<<endl;
        else
            cout<<(n/7)+1<<endl;
    }
    return 0;
}
