#include<iostream>
using namespace std;
int main()
{
    long long int n,q,i,k=0,m=0;
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>n;
        if(n==1)
            cout<<"0\n";
        else{
        while(n!=1)
        {
            if(n%2==0)
            {
                n = n / 2;
                k++;
            }
            else if(n%3==0)
            {
                n = (2*n)/3;
                k++;
            }
            else if(n%5==0)
            {
                n = (4*n)/5;
                k++;
            }
            else
            {
                m++;
                break;
            }
        }
        if(m==0)
            cout<<k<<endl;
        else
            cout<<"-1\n";
        k=0;
        m=0;
        }
    }
    return 0;
}
