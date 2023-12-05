#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,j,n,k=0;
    char a[100005];
    cin>>a;
    n=strlen(a);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]=='0')
        {
            k++;
            for(j=i;j<=n-1;j++)
                a[j]=a[j+1];
            cout<<a<<endl;
            break;
        }
    }
    if(k==0)
    {
        a[n-1]=a[n];
        cout<<a<<endl;
    }
    return 0;
}
