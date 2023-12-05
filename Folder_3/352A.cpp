#include<iostream>
using namespace std;
int main()
{
    int n,x,k,c1=0,c2=0,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x==5)
            c1++;
        else
            c2++;
    }
    k = c1 / 9;
    if(k!=0)
    {
        if(c2!=0)
        {
            for(i=1;i<=k*9;i++)
                cout<<"5";
            for(i=1;i<=c2;i++)
                cout<<"0";
            cout<<endl;
        }
        else
            cout<<"-1\n";
    }
    else
    {
        if(c2!=0)
            cout<<"0\n";
        else
            cout<<"-1\n";
    }
    return 0;
}
