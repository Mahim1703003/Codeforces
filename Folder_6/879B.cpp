#include<iostream>
#include<vector>
#include<iterator>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    vector <int> v;
    vector <int>::iterator it;
    int n,x,i,max_num=0;
    long long int k;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        max_num = max(max_num,x);
        v.push_back(x);
    }
    if(k>=n-1)
        cout<<max_num<<"\n";
    else
    {
        while(1)
        {
            if(v[0]>v[1])
            {
                m[v[0]]++;
                if(m[v[0]]==k)
                {
                    cout<<v[0]<<"\n";
                    break;
                }
                m[v[1]] = 0;
                it = v.begin();
                v.erase(it+1);
                v.push_back(v[1]);
            }
            else
            {
                m[v[1]]++;
                if(m[v[1]]==k)
                {
                    cout<<v[1]<<"\n";
                    break;
                }
                m[v[0]] = 0;
                it = v.begin();
                v.erase(it+0);
                v.push_back(v[0]);
            }
        }
    }
    return 0;
}
