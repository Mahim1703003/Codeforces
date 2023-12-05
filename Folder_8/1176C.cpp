#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int n,i,j,k=0,d=0,b[6]={4,8,15,16,23,42};
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-1;i++)
    {
        m[a[i]]++;
        for(j=1;j<=5;j++)
        {
            if(m[b[j]]<=m[b[j-1]])
                k++;
        }
        if(k!=5)
        {
            m[a[i]]--;
            d++;
        }
        k = 0;
    }
    for(i=0;i<=5;i++)
        d = d + (m[b[i]]-m[b[5]]);
    cout<<d<<"\n";
    return 0;
}
