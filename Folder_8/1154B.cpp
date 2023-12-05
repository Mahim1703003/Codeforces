#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    map <int,int>::iterator it;
    int n,i,x,y,z;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    if(m.size()==1)
        cout<<"0\n";
    else if(m.size()==2)
    {
        it = m.begin();
        x = it->first;
        it++;
        y = it->first;
        if((x+y)%2==0)
            cout<<((x+y)/2)-x<<"\n";
        else
            cout<<y-x<<"\n";
    }
    else if(m.size()==3)
    {
        it = m.begin();
        x = it->first;
        it++;
        y = it->first;
        it++;
        z = it->first;
        if((x+z)%2==0 && (x+z)/2==y)
            cout<<y-x<<"\n";
        else
            cout<<"-1\n";
    }
    else
        cout<<"-1\n";
    return 0;
}
