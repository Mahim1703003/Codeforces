#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map <int,int> m;
    map <int,int>::iterator it;
    map <int,int> m1;
    map <int,int> m2;
    map <int,int> m3;
    int n,i,x;
    cin>>n;
    int a[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        x = a[i];
        m[x]++;
        if(m1[x]==0)
            m1[x] = i;
        else
        {
            if(m2[x]==0)
                m2[x] = i;
            else
            {
                if(i-m2[x]==m2[x]-m1[x])
                {
                    m1[x] = m2[x];
                    m2[x] = i;
                }
                else
                    m3[x] = -1;
            }
        }
    }
    cout<<m.size() - m3.size()<<endl;
    for(it=m.begin();it!=m.end();it++)
    {
        x = it->first;
        if(m3[x]==-1)
            continue;
        cout<<x<<" ";
        if(it->second!=1)
            cout<<m2[x]-m1[x]<<endl;
        else
            cout<<"0\n";
    }

    return 0;

}
