#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <long long int> v;
    string s;
    long long int n,k,i,j,sum=0,ct=0,l;
    cin>>n>>k;
    long long int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    cin>>s;
    i = 0;
    for(j=i;j<=n-1;j++)
    {
        if(s[j]==s[i])
            v.push_back(a[j]);
        else
        {
            sort(v.begin(),v.end(),greater<long long int>());
            for(l=0;l<=v.size()-1;l++)
            {
                ct++;
                if(ct<=k)
                    sum = sum + v[l];
                else
                    break;
            }
            i = j;
            j--;
            v.clear();
            ct = 0;
        }
    }
    sort(v.begin(),v.end(),greater<long long int>());
    for(l=0;l<=v.size()-1;l++)
    {
        ct++;
        if(ct<=k)
            sum = sum + v[l];
        else
            break;
    }
    cout<<sum<<"\n";
    return 0;
}
