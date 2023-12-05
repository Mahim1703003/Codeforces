#include<iostream>
using namespace std;
int main()
{
    int n,i,k=0;
    cin>>n;
    for(i=1;i>=0;i++)
    {
        if((i*(i+1))/2==n)
        {
            cout<<"YES\n";
            k++;
            break;
        }
        if((i*(i+1))/2>n)
            break;
    }
    if(k==0)
        cout<<"NO\n";
    return 0;
}

