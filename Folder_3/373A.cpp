#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <char,int> m;
    map <char,int>::iterator it;
    int k,i,j,ct=0;
    char a[4][4];
    cin>>k;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            cin>>a[i][j];
            if(a[i][j]!='.')
                m[a[i][j]]++;
        }
    }
    for(it=m.begin();it!=m.end();it++)
    {
        if(k*2<it->second)
        {
            ct++;
            break;
        }
    }
    if(ct==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
