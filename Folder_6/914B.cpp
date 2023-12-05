#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    vector <int> v;
    map <int,int>::iterator it;
    int n,x,i;
    cin>>n;
    while(n--)
    {
        cin>>x;
        m[x]++;
        if(m[x]==1)
            v.push_back(x);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(i=0;i<=v.size()-1;i++)
    {
        if(m[v[i]]%2==1)
        {
            cout<<"Conan\n";
            return 0;
        }
    }
    cout<<"Agasa\n";
}
