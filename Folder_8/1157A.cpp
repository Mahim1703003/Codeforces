#include<iostream>
using namespace std;

int main()
{
    int n,m,x,k=0,l=0;
    cin>>n;
    m = n;
    while(1)
    {
        n++;
        if(n%10==0)
        {
            while(n%10==0)
                n = n / 10;
        }
        if(n>=1&&n<=9&&l==0)
        {
            x = n;
            l++;
            k++;
            continue;
        }
        if(x!=n)
            k++;
        else
            break;
    }
    if(m>=10)
        cout<<k+1<<endl;
    else
        cout<<k<<endl;
    return 0;
}
