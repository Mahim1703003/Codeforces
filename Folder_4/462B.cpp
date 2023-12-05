#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <char,int> m;
    vector <long long int> v;
    long long int n,k,i,j,x,sum=0,sum2=0;
    char ch;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>ch;
        m[ch]++;
    }
    for(ch='A';ch<='Z';ch++)
    {
        if(m[ch]!=0)
            v.push_back(m[ch]);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(i=0;i<=v.size()-1;i++)
    {
        sum = sum + v[i];
        if(sum<=k)
            sum2 = sum2 + v[i]*v[i];
        else
        {
            sum = sum - v[i];
            x = k - sum;
            sum = sum + x;
            sum2 = sum2 + x*x;
        }
    }
    cout<<sum2<<"\n";
    return 0;
}
