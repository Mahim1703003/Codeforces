#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v;
    int n,i,j,m,sum=0,sum1=0,max_1=0,max_0=0,ct=1,one=0,len,temp;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            one++;
        if(i==0)
            continue;
        if(a[i]==a[i-1])
            ct++;
        else
        {
            v.push_back(ct);
            ct = 1;
        }
    }
    v.push_back(ct);
    if(one==n)
    {
        cout<<one-1<<"\n";
        return 0;
    }
    if(a[0]==0)
        m = 0;
    else
        m = 1;
    len = v.size();
    for(i=m;i<=len-1;i=i+2)
    {
        if(v[i]>max_0)
            max_0 = v[i];
    }
    max_1 = max_0 + one;
    for(i=m;i<=len-1;i=i+2)
    {
        sum = v[i];
        for(j=i+2;j<=len-1;j=j+2)
        {
            sum = sum + v[j];
            sum1 = sum1 + v[j-1];
            temp = sum + one - sum1;
            if(temp>max_1)
                max_1 = temp;
        }
        sum = 0;
        sum1 = 0;
    }
    cout<<max_1<<"\n";
    return 0;
}
