#include<iostream>
using namespace std;

int main()
{
    int n,x=0,y=0,i,k=0;
    cin>>n;
    char a[n+1];
    cin>>a;
    for(i=0;i<=n-1;i++)
    {
        if(a[i]=='U')
            y++;
        else
            x++;
        if(x==y)
        {
            if(a[i]=='U'&&a[i+1]=='U')
                k++;
            else if(a[i]=='R'&&a[i+1]=='R')
                k++;
        }
    }
    cout<<k<<endl;
    return 0;
}
