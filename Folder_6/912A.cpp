#include<iostream>
using namespace std;
int main()
{
    long long int yb,bb,y,g,b,sum1,sum2,sum=0;
    cin>>yb>>bb>>y>>g>>b;
    sum1=y*2+g*1;
    sum2=g*1+b*3;
    if(sum1>yb)
        sum=sum+sum1-yb;
    if(sum2>bb)
        sum=sum+sum2-bb;
    cout<<sum<<endl;
    return 0;
}
