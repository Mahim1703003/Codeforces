#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char r,s;
    string a;
    cin>>r>>s;
    fflush(stdin);
    getline(cin,a);
    int i,k=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
            continue;
        else
        {
            if((r==a[i])||(s==a[i+1]))
            {
                k++;
                break;
            }
            else
                i=i+1;
        }
    }
    if(k!=0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}

