#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <string,int> m;
    vector <int> v;
    string s;
    int n,c;
    cin>>n;
    while(n--)
    {
        cin>>c>>s;
        sort(s.begin(),s.end());
        if(m[s]==0)
            m[s] = c;
        else
            m[s] = min(m[s],c);
    }
    if(m["ABC"]!=0)
        v.push_back(m["ABC"]);
    if(m["AB"]!=0&&m["BC"]!=0)
        v.push_back(m["AB"]+m["BC"]);
    if(m["AB"]!=0&&m["AC"]!=0)
        v.push_back(m["AB"]+m["AC"]);
    if(m["BC"]!=0&&m["AC"]!=0)
        v.push_back(m["BC"]+m["AC"]);
    if(m["AB"]!=0&&m["C"]!=0)
        v.push_back(m["AB"]+m["C"]);
    if(m["BC"]!=0&&m["A"]!=0)
        v.push_back(m["BC"]+m["A"]);
    if(m["AC"]!=0&&m["B"]!=0)
        v.push_back(m["AC"]+m["B"]);
    if(m["A"]!=0&&m["B"]!=0&&m["C"]!=0)
        v.push_back(m["A"]+m["B"]+m["C"]);
    if(v.size()==0)
        cout<<"-1\n";
    else
    {
        sort(v.begin(),v.end());
        cout<<v[0]<<"\n";
    }
    return 0;
}
