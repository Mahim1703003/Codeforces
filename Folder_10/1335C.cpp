#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int t,n,i,x,max=0,others;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n--)
        {
            cin>>x;
            m[x]++;
            if(m[x]>max)
                max = m[x];
        }
        others = m.size() - 1;
        if(others>max)
            cout<<max<<"\n";
        else
        {
            if(max-others>=2)
                cout<<others+1<<"\n";
            else
                cout<<others<<"\n";
        }
        m.clear();
        max = 0;
    }
    return 0;
}
