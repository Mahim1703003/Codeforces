#include<iostream>
#include<cstdio>
#include<map>
#include<vector>
#include<string>
using namespace std;
int main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    vector <int> v[26];
    map <int,int> m;
    string s,x;
    int n,f,i,d,max_distance=0;
    scanf("%d",&n);
    cin>>s;
    for(i=0;i<=n-1;i++)
    {
        d = s[i] - 'a';
        v[d].push_back(i+1);
    }
    scanf("%d",&f);
    while(f--)
    {
        cin>>x;
        for(i=0;i<=x.size()-1;i++)
        {
            m[x[i]]++;
            d = x[i] - 'a';
            max_distance = max(max_distance,v[d][m[x[i]]-1]);
        }
        printf("%d\n",max_distance);
        m.clear();
        max_distance = 0;
    }
    return 0;
}
