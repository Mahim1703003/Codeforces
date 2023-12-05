#include<iostream>
#include<map>
#include<vector>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    vector <int> v;
    list <int> l;
    list <int>::iterator it;
    int n,i,j,x,d1,d2,ct=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        m[x]++;
        if(m[x]==1)
            v.push_back(x);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(i=0;i<=v.size()-1;i++)
    {
        x = v[i];
        if(i==0)
        {
            for(j=1;j<=m[x];j++)
                l.push_back(x);
        }
        else
        {
            if(m[x]==1)
            {
                ct++;
                if(ct%2==1)
                    l.push_front(x);
                else
                    l.push_back(x);
            }
            else
            {
                d1 = m[x] / 2;
                d2 = m[x] - d1;
                for(j=1;j<=d1;j++)
                    l.push_front(x);
                for(j=1;j<=d2;j++)
                    l.push_back(x);
            }
        }
    }
    for(it=l.begin();it!=l.end();it++)
        cout<<*it<<" ";
    cout<<"\n";
    return 0;
}
