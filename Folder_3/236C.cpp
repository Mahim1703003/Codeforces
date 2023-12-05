#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n>=3)
    {
        if(n%2==1)
            cout<<n*(n-1)*(n-2)<<endl;
        else
        {
            if((n/2)%3==0)
                cout<<(n-1)*(n-2)*(n-3)<<endl;
            else
                cout<<n*(n-1)*(n-3)<<endl;
        }
    }
    else
        cout<<n<<endl;
    return 0;
}
