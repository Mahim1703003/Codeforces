#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m1,m2;
    map <int,int>::iterator it;
    int n,i,x,q,d,rem;
    char ch;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        m1[x]++;
    }
    for(it=m1.begin();it!=m1.end();it++)
    {
        x = it->second;
        d = x / 4;
        rem = x % 4;
        m2[4] = m2[4] + d;
        m2[rem]++;
    }
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>ch>>x;
        if(ch=='+')
        {
            if(m1[x]==0)
            {
                m2[1]++;
                m1[x]++;
            }
            else
            {
                rem = m1[x] % 4;
                if(rem==0)
                {
                    m2[1]++;
                }
                else
                {
                    m2[rem]--;
                    rem++;
                    m2[rem]++;
                }
                m1[x]++;
            }
        }
        else
        {
            rem = m1[x] % 4;
            if(rem==0)
            {
                m2[4]--;
                m2[3]++;
            }
            else
            {

                m2[rem]--;
                rem--;
                m2[rem]++;
            }
            m1[x]--;
        }
        if(m2[4]>=2)
            cout<<"YES\n";
        else if(m2[4]==1)
        {
            if(m2[2]>=2)
                cout<<"YES\n";
            else if(m2[2]==1&&m2[3]>=1)
                cout<<"YES\n";
            else if(m2[3]>=2)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}
