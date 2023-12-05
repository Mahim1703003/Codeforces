#include<iostream>
#include<string>
using namespace std;

int main()
{
    char x[200],y[200],z[200];
    cin>>x>>y;
    int i,k=0;
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]==y[i])
            z[i]='z';
        else
        {
            z[i]=y[i];
            if(z[i]>x[i])
            {
                k++;
                cout<<"-1\n";
                break;
            }
        }

    }
    z[i]='\0';
    if(k==0)
        cout<<z<<endl;
    return 0;
}
