#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char ch[4] = {'a','b','c','d'};
    int n,i;
    cin>>n;
    for(i=0;i<=n-1;i++)
        cout<<ch[i%4];
    cout<<"\n";
    return 0;
}
