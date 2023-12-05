#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x,k=0;
    cin>>n;
    while(n)
    {
        k++;
        string s;
        stringstream ss;
        ss<<n;
        s = ss.str();
        sort(s.begin(),s.end(),greater<int>());
        x = s[0] - '0';
        n = n - x;
    }
    cout<<k<<"\n";
    return 0;
}
