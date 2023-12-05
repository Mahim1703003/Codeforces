#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    map <int,int>::iterator it;
    int n,i,number,x=0,y;
    cin>>n;
    while(n--)
    {
        cin>>number;
        x = max(x,number);
        m[number]++;
    }
    for(i=1;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            m[i]--;
            if(m[i]==0)
                m.erase(i);
            if(i!=x/i)
            {
                m[x/i]--;
                if(m[x/i]==0)
                    m.erase(x/i);
            }
        }
    }
    for(it=m.begin();it!=m.end();it++)
        y = it->first;
    cout<<x<<" "<<y<<"\n";
    return 0;
}
