#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int n,mm,i,sum=0;
    cin>>n>>mm;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    for(i=0;i<=n-2;i++)
    {
        m[a[i]]--;
        sum = sum + (n-(i+1)-m[a[i]]);
    }
    cout<<sum<<"\n";
    return 0;
}
