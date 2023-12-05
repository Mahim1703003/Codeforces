#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n+1],b[n+1];
    memset(b,0,sizeof(b));
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
    {
        j = i;
        b[j]++;
        while(b[j]!=2)
        {
            j = a[j];
            b[j]++;
        }
        cout<<j<<" ";
        memset(b,0,sizeof(b));
    }
    cout<<endl;
    return 0;
}

