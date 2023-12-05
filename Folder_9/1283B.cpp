#include<iostream>
using namespace std;
int main()
{
    int t,n,k,div,rem;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        div = n/k;
        rem = n - div*k;
        if(rem<=k/2)
            cout<<n<<endl;
        else
            cout<<(div*k)+(k/2)<<endl;
    }
    return 0;
}
