#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    stack <char> s;
    string st;
    int n,i,ct=0;
    cin>>n>>st;
    for(i=0;i<=n-1;i++)
    {
        if(st[i]=='(')
           s.push(st[i]);
        else
        {
            if(!s.empty())
                s.pop();
            else
                ct++;
        }
    }
    if((s.size()==0&&ct==0)||(s.size()==1&&ct==1))
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
