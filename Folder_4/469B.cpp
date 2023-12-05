#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m1,m2;
    int p,q,l,r,i,j,k;
    cin>>p>>q>>l>>r;
    int a[p],b[p],c[q],d[q];
    for(i=0;i<=p-1;i++)
    {
        cin>>a[i]>>b[i];
        for(j=a[i];j<=b[i];j++)
            m1[j]++;
    }
    for(i=0;i<=q-1;i++)
    {
        cin>>c[i]>>d[i];
        for(j=l;j<=r;j++)
        {
            for(k=c[i]+j;k<=d[i]+j;k++)
            {
                if(m1[k]!=0)
                    m2[j]++;
            }
        }
    }
    cout<<m2.size()<<"\n";
    return 0;
}
