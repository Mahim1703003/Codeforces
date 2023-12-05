#include<iostream>
#include<vector>
#include<stack>
#include<map>
using namespace std;

vector <int> v[200002];
map <int,int> m;
stack <int> s;
int n;

void display()
{
    int x;
    stack <int> temp;
    while(!s.empty())
    {
        x = s.top();
        s.pop();
        temp.push(x);
    }
    while(!temp.empty())
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<"\n";
}

int dfs(int source)
{
    int l,i,adj_node,x;
    m[source]++;
    s.push(source);
    l = v[source].size();
    for(i=0;i<=l-1;i++)
    {
        adj_node = v[source][i];
        if(m[adj_node]==0)
            dfs(adj_node);
    }
    if(source==n)
    {
        display();
        return 1;
    }
    if(!s.empty())
        s.pop();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int i,x;
    cin>>n;
    int a[n+1];
    for(i=2;i<=n;i++)
    {
        cin>>a[i];
        v[i].push_back(a[i]);
        v[a[i]].push_back(i);
    }

    x = dfs(1);

    return 0;
}
