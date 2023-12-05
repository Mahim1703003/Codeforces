#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
class myclass
{
public:
    char ch[105];
    int length;
};
int main()
{
    int n,k,i,n1,ct1=0,ct2=0,bc,wc;
    char ch1[105];
    cin>>n>>k;
    myclass a[n];
    for(i=0;i<=n-1;i++)
    {
        scanf(" %[^\n]s",a[i].ch);
        a[i].length=strlen(a[i].ch);
    }
    scanf(" %[^\n]s",ch1);
    n1=strlen(ch1);
    for(i=0;i<=n-1;i++)
    {
        if(a[i].length<n1)
            ct1++;
        if(a[i].length<=n1)
            ct2++;
    }
    ct2--;
    bc=ct1+(ct1/k)*5+1;
    wc=ct2+(ct2/k)*5+1;
    cout<<bc<<" "<<wc<<endl;
    return 0;
}
