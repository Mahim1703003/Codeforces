#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int i,k=0;
    cin>>s;
    for(i=1;i<=s.size()-1;i++)
    {
        if(s[i]=='1')
        {
            k++;
            break;
        }
    }
    cout<<(s.size()+k)/2<<"\n";
    return 0;
}
