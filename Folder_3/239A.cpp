#include<iostream>
using namespace std;
int main()
{
    long long int y,k,n,i,f=0;
    cin>>y>>k>>n;
    for(i=(y/k)+1;i*k<=n;i++)
    {
        f++;
        cout<<i*k - y<<" ";
    }
    if(f==0)
        cout<<"-1\n";
    else
        cout<<endl;
    return 0;
}
