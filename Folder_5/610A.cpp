#include<iostream>
using namespace std;
int main()
{
    int n,i,a,m,k=0;
    cin>>n;
    m=n/4;
    for(i=1;i<=m;i++)
    {
        a=n-(2*i);
        if(a%2==0&&a!=2*i)
            k++;
    }
    cout<<k<<endl;
    return 0;
}
