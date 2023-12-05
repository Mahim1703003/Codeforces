#include<iostream>//this is a commnet
using namespace std;
int main()
{
    int n,i,k=0;
    cin>>n;
    char a[n+1],ch1,ch2;
    cin>>a;
    for(i=0;i<=n-2;i++)
    {
        if(a[i]!=a[i+1])
        {
            k++;
            ch1=a[i];
            ch2=a[i+1];
            break;
        }
    }
    if(n<2)
        cout<<"NO\n"<<endl;
    else
    {
        if(k==1)
            cout<<"YES\n"<<ch1<<ch2<<endl;
        else
            cout<<"NO\n";
    }
    return 0;
}
