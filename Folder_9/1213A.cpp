#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x,i,even=0,odd=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0)
            even++;
        else
            odd++;
    }
    cout<<min(even,odd)<<"\n";
    return 0;
}
