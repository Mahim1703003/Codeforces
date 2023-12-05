#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m1;
    map <int,int> m2;
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        m1[a[i]]++;
    }
    for(i=n-1;i>=0;i--)
    {
        m2[a[i]]++;
        if(m2.size()==m1.size())
            break;
    }
    cout<<a[i]<<"\n";
    return 0;
}

