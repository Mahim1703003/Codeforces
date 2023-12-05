#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int n,L,R,U,D;
    cin>>n>>s;
    L = count(s.begin(),s.end(),'L');
    R = count(s.begin(),s.end(),'R');
    U = count(s.begin(),s.end(),'U');
    D = count(s.begin(),s.end(),'D');
    cout<<2*min(L,R)+2*min(U,D)<<"\n";
    return 0;
}
