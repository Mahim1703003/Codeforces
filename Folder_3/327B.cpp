#include<iostream>
using namespace std;
int main()
{
    long long int n,i,k=1000000;
    cin>>n;
    for(i=1;i<=n;i++)
        cout<<++k<<" ";
    cout<<endl;
    return 0;
}
