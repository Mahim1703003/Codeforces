#include<iostream>
#include<stack>
using namespace std;

stack <int> s;
int a[2001][2001];
int max_len = 0,n,len;

void func()
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(a[i][s.top()]==1)
        {
            s.push(i);
            len = s.size();
            max_len = max(max_len,len);
            func();
        }
    }
    s.pop();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int i,j,p;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>p;
        if(p!=-1)
            a[i][p]++;
    }
    for(j=1;j<=n;j++)
    {
        s.push(j);
        len = s.size();
        max_len = max(max_len,len);
        for(i=1;i<=n;i++)
        {
            if(a[i][j]==1)
            {
                s.push(i);
                len = s.size();
                max_len = max(max_len,len);
                func();
            }
        }
        s.pop();
    }
    cout<<max_len<<"\n";
    return 0;
}
