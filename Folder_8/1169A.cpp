#include<iostream>
using namespace std;
int main()
{
    int n,a,x,b,y,k=0;
    cin>>n>>a>>x>>b>>y;
    while(1)
    {
        if(a==n)
            a = 1;
        else
            a++;
        if(b==1)
            b = n;
        else
            b--;
        if(a==b)
            k++;
        if(a==x || b==y)
            break;
    }
    if(k!=0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
