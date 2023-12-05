#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,a[3];
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3,greater<int>());
        if(a[0]-(a[1]+a[2])<=1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
