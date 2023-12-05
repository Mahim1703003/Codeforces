#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <int,int> m;
    int q,n,x;
    cin>>q;
    while(q--)
    {
        cin>>n;
        while(n--)
        {
            cin>>x;
            m[x]++;
        }
        if(m[2048]!=0)
            cout<<"YES\n";
        else
        {
            m[2] = m[2] + m[1]/2;
            m[4] = m[4] + m[2]/2;
            m[8] = m[8] + m[4]/2;
            m[16] = m[16] + m[8]/2;
            m[32] = m[32] + m[16]/2;
            m[64] = m[64] + m[32]/2;
            m[128] = m[128] + m[64]/2;
            m[256] = m[256] + m[128]/2;
            m[512] = m[512] + m[256]/2;
            m[1024] = m[1024] + m[512]/2;
            m[2048] = m[2048] + m[1024]/2;
            if(m[2048]!=0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        m.clear();
    }
    return 0;
}
