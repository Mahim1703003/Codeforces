#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x,even=0,odd=0;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x%2==0)
            even++;
        else
            odd++;
    }
    if(odd!=0)
        cout<<"First\n";
    else
        cout<<"Second\n";
    return 0;
}
