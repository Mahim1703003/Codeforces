#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s1,s2;
    map <int,int> m1,m2;
    int n,i,j,k=0,f=0,d;
    cin>>n>>s1>>s2;
    for(i=0;i<=n-1;i++)
    {
        d = s2[i] - '0';
        m1[d]++;
        m2[d]++;
    }
    for(i=0;i<=n-1;i++)
    {
        d = s1[i] - '0';
        for(j=d;j<=1000;j++)
        {
            if(m1[j]!=0)
            {
                f++;
                m1[j]--;
                break;
            }
        }
        if(f==0)
        {
            k++;
            for(j=0;j<d;j++)
            {
                if(m1[j]!=0)
                {
                    m1[j]--;
                    break;
                }
            }
        }
        f = 0;
    }
    cout<<k<<"\n";
    k = 0;
    for(i=0;i<=n-1;i++)
    {
        d = s1[i] - '0';
        for(j=d+1;j<=1000;j++)
        {
            if(m2[j]!=0)
            {
                f++;
                m2[j]--;
                break;
            }
        }
        if(f==0)
        {
            for(j=0;j<=d;j++)
            {
                if(m2[j]!=0)
                {
                    m2[j]--;
                    break;
                }
            }
        }
        else
            k++;
        f = 0;
    }
    cout<<k<<"\n";
    return 0;
}
