#include<iostream>
using namespace std;
int main()
{
    long long int N,M,K,L,a;
    cin>>N>>M>>K>>L;
    a=N/M;
    if((a*M-K)>=L)
        cout<<a<<endl;
    else
        cout<<"-1\n";
    return 0;
}
