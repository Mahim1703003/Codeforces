#include<iostream>
using namespace std;
int main()
{
    long long int n,i,remainder,m=0,p=0,o=0,l=0,b,ans,sum=0;
    cin>>n;
    for(i=1;i>=0;i++)
    {
        remainder=n%10;
        if(remainder==9)
            o++;
        else
        {
            p++;
            if(p==1)
                b=o;
        }
        if(i==1&&remainder==9)
            m++;
        sum=sum+remainder;
        n=n/10;
        if(n==0)
            break;
    }
    if(m==1)
    {
        if(b!=o)
            cout<<sum+(i-o)*9<<endl;
        else if(b==o)
            cout<<sum+(i-1-o)*9<<endl;
    }
    else
        cout<<sum+(i-1)*9<<endl;
    return 0;
}
