#include<iostream>
using namespace std;
int main()
{
    int n,mi,ma=0,i,k;
    cin>>n;
    if(n==1)
        cout<<"0 1\n";
    else if(n<=5)
        cout<<"0 2\n";
    else if(n==6)
        cout<<"1 2\n";
    else
    {
        mi=n/7;
        mi=2*mi;
        if(n%7==6)
            mi++;
        for(i=1,k=1;k<=n;k++,i++)
        {
            if(i==1||i==2)
                ma++;
            if(i==7)
                i=0;
        }
        cout<<mi<<" "<<ma<<endl;
    }
    return 0;
}
