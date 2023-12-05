#include<iostream>
using namespace std;
int main()
{
    long long int n,i,in1,in2,ct1=1,ct2=1,m=998244353,small;
    cin>>n;
    //char a[n+1];
    string a;
    cin>>a;
    for(i=0;i<=n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            in1=i;
            break;
        }
        else
            ct1++;
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]!=a[i-1])
        {
            in2=i;
            break;
        }
        else
            ct2++;
    }
    small=(ct1<ct2)?ct1:ct2;
    if(a[in1]==a[in2])
        cout<<((ct1+1)*(ct2+1))%m<<endl;
    else
        cout<<(ct1+ct2+1)%m<<endl;
    return 0;
}
