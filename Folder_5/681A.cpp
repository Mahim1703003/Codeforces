#include<iostream>
using namespace std;
int main()
{
    int n,i,be,af,k=0;
    char a[13];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>be>>af;
        if(be>=2400&&af>be)
            k++;
    }
    if(k!=0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
