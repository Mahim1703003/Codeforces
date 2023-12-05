#include<iostream>
using namespace std;
int main()
{
    int n,i,a=0,b=1,c;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        if(c==i)
        {
            cout<<"O";
            a=b;
            b=c;
        }
        else
            cout<<"o";
    }
    return 0;
}
