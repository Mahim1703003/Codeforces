#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m=0,i;
    cin>>n;
    char a[n+1];
    cin>>a;
    sort(a,a+n);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=a[i+1])
            m++;
    }
    if(n-m<=26-m)
        cout<<n-m<<endl;
    else
        cout<<"-1\n";
    return 0;
}
