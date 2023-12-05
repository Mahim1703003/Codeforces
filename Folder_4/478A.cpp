#include<iostream>
using namespace std;
int main()
{
    int a[5],i,sum=0;
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
        sum = sum + a[i];
    }
    if(sum%5==0&&sum/5!=0)
        cout<<sum/5<<endl;
    else
        cout<<"-1\n";

    return 0;
}
