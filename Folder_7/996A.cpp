#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,remainder;
    cin>>n;
    sum=sum+(n/100);
    remainder=n%100;
    sum=sum+(remainder/20);
    remainder=remainder%20;
    sum=sum+(remainder/10);
    remainder=remainder%10;
    sum=sum+(remainder/5);
    remainder=remainder%5;
    sum=sum+(remainder/1);
    remainder=remainder%1;
    cout<<sum<<endl;
    return 0;
}
