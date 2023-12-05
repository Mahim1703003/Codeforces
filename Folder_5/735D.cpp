#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int n,i,k=0;
    cin>>n;
    if(n==2)
        cout<<"1\n";
    else if(n%2==0)
        cout<<"2\n";
    else
    {
        for(i=3;i<=sqrt(n);i=i+2)
        {
            if(n%i==0)
            {
                k++;
                break;
            }
        }
        if(k==0)
            cout<<"1\n";
        else
        {
            k=0;
            n=n-2;
            for(i=3;i<=sqrt(n);i=i+2)
            {
                if(n%i==0)
                {
                    k++;
                    break;
                }
            }
            if(k==0)
                cout<<"2\n";
            else
                cout<<"3\n";
        }
    }
    return 0;
}
