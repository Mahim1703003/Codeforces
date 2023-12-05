#include<iostream>
using namespace std;
int main()
{
    int n,i,k,mi=0,ma=0;
    cin>>n;
    for(i=1,k=1;k<=n;i++,k++)
    {
        if(i==6||i==7)
            mi++;
        if(i==7)
            i=0;
    }
    for(i=1,k=1;k<=n;i++,k++)
    {
        if(i==1||i==2)
            ma++;
        if(i==7)
            i=0;
    }
    cout<<mi<<" "<<ma<<endl;
    return 0;
}
