#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    char a[1005],b[1005];
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        strcpy(b,a);
        strrev(b);
        if(strcmp(a,b)==0)
        {
            int j,n,k=0;
            n=strlen(a);
            for(j=0;j<=n-2;j++)
            {
                if(a[j]!=a[j+1])
                {
                    char temp;
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    k++;
                    break;
                }
            }
            if(k!=0)
                cout<<a<<endl;
            else
                cout<<"-1"<<endl;
            k=0;
        }
        else
            cout<<a<<endl;
    }
    return 0;
}
