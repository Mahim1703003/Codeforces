#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch[10000];
    cin>>ch;
    int t,n,i,d,k=0,in;
    long long int sum=0;
    cin>>t;
    int a[26];
    for(i=0;i<=25;i++)
    {
        cin>>a[i];
        if(a[i]>k)
        {
            k=a[i];
            in=i;
        }
    }
    for(i=0;ch[i]!='\0';i++)
    {
        d=ch[i]-'a';
        sum=sum+(i+1)*a[d];
    }
    n=strlen(ch);
    for(i=n+1;i<=n+t;i++)
        sum=sum+(i*a[in]);
    cout<<sum<<endl;
    return 0;
}
