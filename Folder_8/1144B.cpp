#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main()
{
    int n,i,odd=0,even=0,d;
    long long int sum = 0;
    cin>>n;
    int a[n];
    vector <int> e;
    vector <int> o;
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            even++;
            e.push_back(a[i]);
        }
        else
        {
            odd++;
            o.push_back(a[i]);
        }
    }
    if(abs(even-odd)==1||abs(even-odd)==0)
        cout<<"0\n";
    else if(even>odd)
    {
        d = even-odd-1;
        sort(e.begin(),e.end());
        for(i=0;i<=d-1;i++)
            sum = sum + e[i];
        cout<<sum<<endl;
    }
    else
    {
        d = odd-even-1;
        sort(o.begin(),o.end());
        for(i=0;i<=d-1;i++)
            sum = sum + o[i];
        cout<<sum<<endl;
    }
    return 0;
}
