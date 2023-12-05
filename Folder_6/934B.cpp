#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k,i;
    cin>>k;
    if(k<=36)
    {
        if(k%2==1)
        {
            cout<<"4";
            k--;
        }
        for(i=1;i<=k/2;i++)
            cout<<"8";
        cout<<"\n";
    }
    else
        cout<<"-1\n";
    return 0;
}
