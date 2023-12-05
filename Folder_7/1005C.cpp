#include<iostream>
#include<map>
#include<cmath>
#include<vector>
#include<cstdio>
#define lld long long int
using namespace std;
int main()
{
    /*ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/
    map <lld,lld> m1,m2;
    vector <lld> v;
    lld n,i,j,x,dif,l,sum=0;
    scanf("%lld",&n);
    lld a[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%lld",&a[i]);
        m1[a[i]]++;
    }
    for(i=0;i<=n-1;i++)
    {
        m1[a[i]]--;
        for(j=1;j<=33;j++)
        {
            x = pow(2.0,j*1.0);
            if(x>=a[i])
            {
                dif = x - a[i];
                if(m1[dif]!=0)
                {
                    if(m2[a[i]]==0)
                    {
                        m2[a[i]]++;
                        v.push_back(a[i]);
                    }
                    if(m2[dif]==0)
                    {
                        m2[dif]++;
                        v.push_back(dif);
                    }
                }
            }
        }
        m1[a[i]]++;
    }
    l = v.size();
    for(i=0;i<=l-1;i++)
        sum = sum + m1[v[i]];
    x = n - sum;
    printf("%lld\n",x);//cout<<x<<"\n";
    return 0;
}
