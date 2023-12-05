#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int t,n,sum,x;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n = s.size();
        x = s[0] - '0';
        sum = (x-1)*10;
        if(n==1)
            sum = sum + 1;
        else if(n==2)
            sum = sum + 3;
        else if(n==3)
            sum = sum + 6;
        else
            sum = sum + 10;
        cout<<sum<<"\n";
    }
    return 0;
}
