#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector <int> v;

void prime_factorization(int n)
{
    int i;
    while(n%2==0)
    {
        v.push_back(2);
        n = n / 2;
    }
    for(i=3;i<=sqrt(n);i=i+2)
    {
        while(n%i==0)
        {
            v.push_back(i);
            n = n / i;
        }
    }
    if(n!=1)
        v.push_back(n);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,i,mult=1,ct=0;
    cin>>n>>k;
    prime_factorization(n);
    if(v.size()>=k)
    {
        for(i=0;i<=k-2;i++)
            cout<<v[i]<<" ";
        for(i=k-1;i<=v.size()-1;i++)
            mult = mult * v[i];
        cout<<mult<<"\n";
    }
    else
        cout<<"-1\n";
    return 0;
}
