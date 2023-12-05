#include<iostream>
using namespace std;
int main()
{
    char ch='a';
    int t,i,a,b,j,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        int f,r;
        f=a/b;
        r=a%b;
        for(j=1;j<=b;j++)
        {
            for(k=1;k<=f;k++)
                cout<<ch;
            ch++;
        }
        ch--;
        if(r==0)
            cout<<endl;
        else{
        for(j=1;j<=r;j++)
            cout<<ch;
        cout<<endl;
        }
        ch='a';
    }
    return 0;
}
