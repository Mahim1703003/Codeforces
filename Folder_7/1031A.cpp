#include<iostream>
using namespace std;
int main()
{
    int w,h,k,i,sum=0;
    cin>>w>>h>>k;
    for(i=1;i<=k;i++)
    {
        sum = sum + ((2*w + 2*h)-4);
        w = w - 4;
        h = h - 4;
    }
    cout<<sum<<endl;
    return 0;
}
