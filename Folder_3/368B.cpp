/*
this code was also accepted but after seeing other's code,the later one was more efficient though
the limit is also same.
#include<iostream>
#include<map>
using namespace std;
int b[100001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> ma;
    int n,m,i,x;
    cin>>n>>m;
    int a[n+1],c[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        ma[a[i]]++;
        b[a[i]]++;
    }
    for(i=1;i<=n;i++)
    {
        if(i==1)
            c[i] = ma.size();
        else
        {
            b[a[i-1]]--;
            if(b[a[i-1]]==0)
                c[i] = c[i-1] - 1;
            else
                c[i] = c[i-1];
        }
    }
    while(m--)
    {
        cin>>x;
        cout<<c[x]<<"\n";
    }
    return 0;
}
*/
#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> ma;
    int n,m,i,x;
    cin>>n>>m;
    int a[n+1],c[n+1];
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=n;i>=1;i--)
    {
        ma[a[i]]++;
        c[i] = ma.size();
    }
    while(m--)
    {
        cin>>x;
        cout<<c[x]<<"\n";
    }
    return 0;
}
