#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<iterator>
#include<cmath>
#include<utility>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    map <int,int>::iterator it;
    vector < pair <int,int> > v1,v2;
    int n,k,i,x,sum1=0,sum2=0,y,max_set,rest,len1,len2,f=0;
    cin>>n>>k;
    max_set = ceil((n*1.0)/2.0);
    for(i=1;i<=n;i++)
    {
        cin>>x;
        m[x]++;
    }
    for(it=m.begin();it!=m.end();it++)
    {
        x = it->second;
        if(x%2==0)
        {
            y = x / 2;
            v1.push_back(make_pair(y,x));
        }
        else
        {
            y = x / 2;
            y++;
            v2.push_back(make_pair(y,x));
        }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    reverse(v1.begin(),v1.end());
    reverse(v2.begin(),v2.end());
    len1 = v1.size();
    len2 = v2.size();
    for(i=0;i<=len1-1;i++)
    {
        sum1 = sum1 + v1[i].first;
        sum2 = sum2 + v1[i].second;
        if(sum1>=max_set)
        {
            f++;
            if(sum1==max_set)
                cout<<sum2<<"\n";
            else
            {
                sum1 = sum1 - v1[i].first;
                sum2 = sum2 - v1[i].second;
                rest = max_set - sum1;
                sum2 = sum2 + (rest*2);
                cout<<sum2<<"\n";
            }
            break;
        }
    }
    if(f==0)
    {
        for(i=0;i<=len2-1;i++)
        {
            sum1 = sum1 + v2[i].first;
            sum2 = sum2 + v2[i].second;
            if(sum1>=max_set)
            {
                if(sum1==max_set)
                    cout<<sum2<<"\n";
                else
                {
                    sum1 = sum1 - v2[i].first;
                    sum2 = sum2 - v2[i].second;
                    rest = max_set - sum1;
                    sum2 = sum2 + (rest*2);
                    cout<<sum2<<"\n";
                }
                break;
            }
        }
    }
    return 0;
}
