#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <char,int> m;
    string s;
    int i,ma,mi,diff,sum=0,rem1,rem2;
    cin>>s;
    for(i=0;i<=s.size()-1;i++)
        m[s[i]]++;

    ma = max(m['L'],m['R']);
    mi = min(m['L'],m['R']);
    diff = ma - mi;
    sum = sum + diff/2;
    rem1 = diff % 2;

    ma = max(m['U'],m['D']);
    mi = min(m['U'],m['D']);
    diff = ma - mi;
    sum = sum + diff/2;
    rem2 = diff % 2;

    if((rem1==1&&rem2==0) || (rem1==0&&rem2==1))
        cout<<"-1\n";
    else if(rem1==1&&rem2==1)
        cout<<sum+1<<"\n";
    else
        cout<<sum<<"\n";
    return 0;
}
