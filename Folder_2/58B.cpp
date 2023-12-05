#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v;
    int n,i;
    cin>>n;
    while(n%2==0)
    {
        v.push_back(n);
        n = n /2;
    }
    for(i=3;i<=sqrt(n);i=i+2)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                v.push_back(n);
                n = n / i;
            }
        }
    }
    if(n!=1)
        v.push_back(n);
    v.push_back(1);
    for(i=0;i<=v.size()-1;i++)
        cout<<v[i]<<" ";
    cout<<"\n";
    return 0;
}
