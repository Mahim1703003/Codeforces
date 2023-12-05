#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,mult=1,a,b,l;
    int i;
    vector <long long int> v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n%2==0)
        {
            v.push_back(2);
            n = n / 2;
        }
        for(i=3;i<=sqrt(n);i=i+2)
        {
            if(n%i==0)
            {
                while(n%i==0)
                {
                    v.push_back(i);
                    n = n / i;
                }
            }
        }
        if(n!=1)
            v.push_back(n);
        l = v.size();
        if(l>=3)
        {
            if(v[0]!=v[l-1])
            {
                a = v[0];
                b = v[l-1];
                for(i=1;i<=l-2;i++)
                    mult = mult * v[i];
            }
            else
            {
                a = v[0];
                b = v[l-1]*v[l-2];
                for(i=1;i<=l-3;i++)
                    mult = mult * v[i];
            }
            if(a!=mult&&a!=b&&mult!=b&&mult>1)
            {
                cout<<"YES\n";
                cout<<a<<" "<<mult<<" "<<b<<"\n";
            }
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";
        mult = 1;
        v.clear();
    }
}
