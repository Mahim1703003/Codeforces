#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    map <int,int>::iterator it;
    int n,n2,index,income;
    long long int sum = 0;
    cin>>n;
    while(n--)
    {
        cin>>index>>income;
        m[index] = income;
    }
    cin>>n2;
    while(n2--)
    {
        cin>>index>>income;
        if(income>m[index])
            m[index] = income;
    }
    for(it=m.begin();it!=m.end();it++)
        sum = sum + it->second;
    cout<<sum<<"\n";
    return 0;
}
