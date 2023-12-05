#include<iostream>
using namespace std;
int main()
{
    int n,m,i,k;
    cin>>n>>m;
    k=n*m;
    for(i=1;i>=1;i++)
    {
        k=k-n-m+1;
        if(k==0)
        {
            if(i%2==1)
                cout<<"Akshat\n";
            else
                cout<<"Malvika\n";
            break;
        }
        n--;
        m--;
    }
    return 0;
}
