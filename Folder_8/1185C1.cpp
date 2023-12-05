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
    int n,M,i,j,sum=0,sum1,ct=0;
    cin>>n>>M;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-1;i++)
    {
        sum = sum + a[i];
        if(sum<=M)
        {
            cout<<"0 ";
            v.push_back(a[i]);
        }
        else
        {
            sum1 = sum;
            sort(v.begin(),v.end(),greater<int>());
            for(j=0;j<=v.size()-1;j++)
            {
                ct++;
                sum1 = sum1 - v[j];
                if(sum1<=M)
                    break;
            }
            cout<<ct<<" ";
            v.push_back(a[i]);
            ct = 0;
        }
    }
    cout<<"\n";
    return 0;
}
