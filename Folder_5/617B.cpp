#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <long long int> v;
    long long int n,i,x,l,mult=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x==1)
            v.push_back(i);
    }
    l = v.size();
    if(l==0)
        cout<<"0\n";
    else
    {
        for(i=1;i<=l-1;i++)
            mult = mult * (v[i]-v[i-1]);
        cout<<mult<<"\n";
    }
    return 0;
}
