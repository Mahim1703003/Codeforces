#include<iostream>
#include<list>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    list <int> l;
    list <int>::iterator it;
    int n,k,i,x;
    cin>>n>>k;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(l.size()<k)
        {
            if(m[a[i]]==0)
            {
                l.push_front(a[i]);
                m[a[i]]++;
            }
        }
        else
        {
            if(m[a[i]]==0)
            {
                l.push_front(a[i]);
                m[a[i]]++;
                x = l.back();
                m[x] = 0;
                l.pop_back();
            }
        }
    }
    cout<<l.size()<<"\n";
    for(it=l.begin();it!=l.end();it++)
        cout<<*it<<" ";
    cout<<"\n";
    return 0;
}
