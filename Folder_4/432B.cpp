#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int n,i;
    cin>>n;
    int x[n],y[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>x[i]>>y[i];
        m[x[i]]++;
    }
    for(i=0;i<=n-1;i++)
        cout<<(n-1)+m[y[i]]<<" "<<(n-1)-m[y[i]]<<"\n";
    return 0;
}
