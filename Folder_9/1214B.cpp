#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int b,g,n,i,k=0;
    cin>>b>>g>>n;
    for(i=0;i<=n;i++)
    {
        if(i<=b && n-i<=g)
            k++;
    }
    cout<<k<<"\n";
    return 0;
}
