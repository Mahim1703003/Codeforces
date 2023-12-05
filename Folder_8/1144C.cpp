#include<iostream>
#include<map>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    map <int,int>::iterator it;
    vector <int> v1,v2;
    int n,i,x,k=0,len1,len2;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        m[x]++;
        if(m[x]>2)
            k++;
    }
    if(k!=0)
        cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second==1)
                v1.push_back(it->first);
            else
            {
                v1.push_back(it->first);
                v2.push_back(it->first);
            }
        }
        sort(v2.begin(),v2.end(),greater<int>());
        cout<<v1.size()<<"\n";
        len1 = v1.size();
        for(i=0;i<=len1-1;i++)
            cout<<v1[i]<<" ";
        cout<<"\n";
        cout<<v2.size()<<"\n";
        len2 = v2.size();
        for(i=0;i<=len2-1;i++)
            cout<<v2[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
