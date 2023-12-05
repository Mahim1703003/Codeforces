#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a="v<^>",b="v>^<";
    int n,i,j;
    char ch1,ch2;
    cin>>ch1>>ch2>>n;

    for(i=0;i<=3;i++)
    {
        if(a[i]==ch1)
            break;
    }
    i = (i+n) % 4;

    for(j=0;j<=3;j++)
    {
        if(b[j]==ch1)
            break;
    }
    j = (j+n) % 4;

    if(a[i]==ch2 && b[j]==ch2)
        cout<<"undefined\n";
    else
    {
        if(a[i]==ch2)
            cout<<"cw\n";
        else
            cout<<"ccw\n";
    }
    return 0;
}
