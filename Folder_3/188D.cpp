#include<iostream>
using namespace std;
int main()
{
    /// actually this had to be submitted in Roco labguage
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            cout<<"*";
        cout<<"\n";
    }
    return 0;
}
