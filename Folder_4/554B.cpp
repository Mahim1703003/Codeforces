#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <string,int> m;
    string s;
    int n,i,max_string=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        m[s]++;
        max_string = max(max_string,m[s]);
    }
    cout<<max_string<<"\n";
    return 0;
}
