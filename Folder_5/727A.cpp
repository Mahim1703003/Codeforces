#include<iostream>
#include<cstdlib>
#include<stack>
#define lld long long int
using namespace std;

stack <lld> s;
lld b;

void dfs(lld source)
{
    stack <lld> temp;
    lld i,m,t;
    s.push(source);
    if(source<=b)
    {
        for(i=1;i<=2;i++)
        {
            if(i==1)
                m = source * 2;
            else
                m = source * 10 + 1;
            dfs(m);
        }
        if(source==b)
        {
            cout<<"YES\n";
            cout<<s.size()<<"\n";
            while(!s.empty())
            {
                t = s.top();
                s.pop();
                temp.push(t);
            }
            while(!temp.empty())
            {
                cout<<temp.top()<<" ";
                temp.pop();
            }
            cout<<"\n";
            exit(0);
        }
        else
        {
            s.pop();
            if(s.empty())
                cout<<"NO\n";
        }
    }
    else
        s.pop();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    lld a;

    cin>>a>>b;

    dfs(a);

    return 0;

}
