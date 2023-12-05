#include<iostream>
#include<string>
#include<map>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <string,int> fruit;
    map <string,int>::iterator it;
    string s;
    int n,m,i,distinct,min_sum=0,max_sum=0;
    cin>>n>>m;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=1;i<=m;i++)
    {
        cin>>s;
        fruit[s]++;
    }
    distinct = fruit.size();
    int b[distinct];
    i = 0;
    for(it=fruit.begin(),i=0;it!=fruit.end();it++,i++)
        b[i] = it->second;
    sort(b,b+distinct,greater<int>());
    sort(a,a+n);
    for(i=0;i<=distinct-1;i++)
        min_sum = min_sum + (b[i]*a[i]);
    reverse(a,a+n);
    for(i=0;i<=distinct-1;i++)
        max_sum = max_sum + (b[i]*a[i]);
    cout<<min_sum<<" "<<max_sum<<"\n";
    return 0;
}
