#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,number,save,ct=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    number = a[0];
    while(number%2==0)
        number = number / 2;
    while(number%3==0)
        number = number / 3;
    save = number;
    for(i=1;i<=n-1;i++)
    {
        number = a[i];
        while(number%2==0)
            number = number / 2;
        while(number%3==0)
            number = number / 3;
        if(number==save)
            ct++;
    }
    if(ct==n-1)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
