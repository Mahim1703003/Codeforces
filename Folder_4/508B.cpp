#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,n,k=0,p=0;
    char a[1000000],temp;
    cin>>a;
    n=strlen(a);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]=='2'||a[i]=='4'||a[i]=='6'||a[i]=='8'||a[i]=='0')
            k++;
    }
    if(k==0)
        cout<<"-1\n";
    else{
    for(i=0;i<=n-1;i++)
    {
        if((a[i]=='2'||a[i]=='4'||a[i]=='6'||a[i]=='8'||a[i]=='0'))
        {
            if(a[i]<a[n-1])
            {
                temp=a[n-1];
                a[n-1]=a[i];
                a[i]=temp;
                cout<<a<<endl;
                break;
            }
            else
            {
                p++;
                if(p==k)
                {
                    temp=a[n-1];
                    a[n-1]=a[i];
                    a[i]=temp;
                    cout<<a<<endl;
                    break;
                }
            }
        }
    }
    }
    return 0;
}
