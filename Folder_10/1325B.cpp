#include<iostream>
#include<map>
using namespace std;
int main()
{
    int t,n,x;
    map <int,int> m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n--)
        {
            cin>>x;
            m[x]++;
        }
        cout<<m.size()<<endl;
        m.clear();
    }
    return 0;
}
