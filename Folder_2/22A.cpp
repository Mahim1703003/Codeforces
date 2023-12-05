#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    map <int,int>::iterator it;
    int n,x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        m[x]++;
    }
    if(m.size()==1)
        cout<<"NO\n";
    else
    {
        it = m.begin();
        it++;
        cout<<it->first;
    }
    return 0;
}
