#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int n,i,x;
    cin>>n;
    x = n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-1;i++)
    {
        m[a[i]]++;
        while(m[x]!=0)
        {
            cout<<x<<" ";
            x--;
        }
        cout<<"\n";
    }
    return 0;
}
