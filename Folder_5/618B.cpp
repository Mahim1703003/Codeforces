#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int n,i,j,k;
    cin>>n;
    k = n;
    int a[n][n],b[n];
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            cin>>a[i][j];
            if(a[i][j]!=0)
                m[a[i][j]]++;
        }
        if(m.size()==n-1)
        {
            b[i] = k;
            k--;
        }
        else
            b[i] = m.size();
        m.clear();
    }
    for(i=0;i<=n-1;i++)
        cout<<b[i]<<" ";
    cout<<"\n";
    return 0;
}
