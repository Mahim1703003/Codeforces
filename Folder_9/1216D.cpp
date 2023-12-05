#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <long long int> v,v2;
    long long int n,i,j,h,num,sum=0,k=0;
    cin>>n;
    long long int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(i==0)
            h = a[i];
        else if(a[i]>h)
            h = a[i];
    }
    for(i=0;i<=n-1;i++)
    {
        if(h!=a[i])
            v.push_back(h-a[i]);
    }
    sort(v.begin(),v.end());
    num = v[0];
    for(i=1;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            if(i!=num/i)
            {
                v2.push_back(i);
                v2.push_back(num/i);
            }
            else
                v2.push_back(i);
        }
    }
    sort(v2.begin(),v2.end(),greater<int>());
    for(i=0;i<=v2.size()-1;i++)
    {
        for(j=0;j<=v.size()-1;j++)
        {
            if(v[j]%v2[i]==0)
            {
                k++;
                sum = sum + (v[j]/v2[i]);
            }
        }
        if(k==v.size())
            break;
        k = 0;
        sum = 0;
    }
    cout<<sum<<" "<<v2[i]<<"\n";
    return 0;
}
