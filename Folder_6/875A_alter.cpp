#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v;
    long long int n,i,l,num,sum=0,len;
    cin>>n;
    if(n-100>=1)
        l = n - 100;
    else
        l = 1;
    for(i=n-1;i>=l;i--)
    {
        num = i;
        while(num)
        {
            sum = sum + (num%10);
            num = num / 10;
        }
        sum = sum + i;
        if(sum==n)
            v.push_back(i);
        sum = 0;
    }
    len = v.size();
    cout<<len<<"\n";
    if(len!=0)
        sort(v.begin(),v.end());
    for(i=0;i<=len-1;i++)
        cout<<v[i]<<"\n";
    return 0;
}
