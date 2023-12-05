#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
    int n,n1,n2,sl,ma;
    char a[15],a1[15],a2[15];
    cin>>a;
    if(a[0]!='-')
        cout<<a<<endl;
    else{
    n=strlen(a);
    strcpy(a1,a);
    strcpy(a2,a);
    a1[n-1]='\0';
    a2[n-2]=a2[n-1];
    a2[n-1]='\0';
    n1=atoi(a1);
    n2=atoi(a2);
    ma=(n1>n2)?n1:n2;
    cout<<ma<<endl;
    }
    return 0;
}
