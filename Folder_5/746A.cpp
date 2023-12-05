#include<iostream>
using namespace std;
int main()
{
    int a,b,c,i,k=0;
    cin>>a>>b>>c;
    for(i=1;i>=0;i++)
    {
        a=a-1;
        b=b-2;
        c=c-4;
        if(a>=0&&b>=0&&c>=0)
            k=k+7;
        else
            break;
    }
    cout<<k<<endl;
    return 0;
}
