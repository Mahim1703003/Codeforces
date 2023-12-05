#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    vector <int> v;
    int n,k,i,x,len;
    long long int sum=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        m[x]++;
    }
    for(i=1;;i++)
    {
        if(m[i]==0)
        {
            sum = sum + i;
            if(sum<=k)
                v.push_back(i);
            else
                break;
        }
    }
    len = v.size();
    cout<<len<<"\n";
    for(i=0;i<=len-1;i++)
        cout<<v[i]<<" ";
    cout<<"\n";
    return 0;
}
