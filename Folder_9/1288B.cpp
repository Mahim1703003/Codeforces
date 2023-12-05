#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,A,B,ma,mi,ans;
    cin>>t;
    while(t--)
    {
        cin>>A>>B;
        string s;
        stringstream ss;
        ss<<B;
        s = ss.str();
        if(s.size()==count(s.begin(),s.end(),'9'))
            ans = A * s.size();
        else
            ans = A * (s.size()-1);
        cout<<ans<<"\n";
        s.clear();
        ss.clear();
    }
    return 0;
}
