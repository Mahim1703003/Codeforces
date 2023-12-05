#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,first=1,second=2,win,x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if((x-1)%2==1)
        {
            win = first;
            swap(first,second);
        }
        else
            win = second;
        cout<<win<<"\n";
    }
    return 0;
}
