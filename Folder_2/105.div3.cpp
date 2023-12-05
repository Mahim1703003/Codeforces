#include<iostream>
using namespace std;
int main()
{
    long long int n,a;
    cin>>n;
    a=n/3;
    a=a*2;
    if(n%3==2)
        a++;
    cout<<a<<endl;
    return 0;
}
