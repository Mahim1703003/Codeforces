#include<iostream>
using namespace std;
int main()
{
    int n,k,i;
    cin>>n>>k;
    if(k>n)
        cout<<"NO\n";
    else if(n==k)
    {
        cout<<"YES\n";
        for(i=1;i<=k;i++)
            cout<<"1 ";
    }
    else
    {
        if(n%2==1)
        {
            if(k==1)
                cout<<"NO\n";
            else
            {

            }
        }
    }
}
