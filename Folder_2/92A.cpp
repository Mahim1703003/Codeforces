#include<iostream>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n>>m;
    int a[n];
    for(i=0;i<=n-1;i++)
        a[i] = i+1;
    i = 0;
    while(1)
    {
        if(m>=a[i])
        {
            m = m - a[i];
            i = (i+1) % n;
        }
        else
            break;
    }
    cout<<m<<endl;
    return 0;
}
