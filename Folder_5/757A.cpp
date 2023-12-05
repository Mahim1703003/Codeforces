#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int a[7],b[7],c[7],i;
    char ch[100005];
    memset(b,0,sizeof(b));
    for(i=0;i<=6;i++)
    {
        if(i==0||i==3)
            a[i]=2;
        else
            a[i]=1;
    }
    cin>>ch;
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='a')
            b[0]++;
        else if(ch[i]=='B')
            b[1]++;
        else if(ch[i]=='b')
            b[2]++;
        else if(ch[i]=='u')
            b[3]++;
        else if(ch[i]=='l')
            b[4]++;
        else if(ch[i]=='r')
            b[5]++;
        else if(ch[i]=='s')
            b[6]++;
    }
    for(i=0;i<=6;i++)
        c[i]=b[i]/a[i];
    sort(c,c+7);
    cout<<c[0]<<endl;
    return 0;
}
