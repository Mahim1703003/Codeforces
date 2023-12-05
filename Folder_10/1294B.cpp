#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector < pair <int,int> > v1,v2;
    int t,n,i,j,x,y,k=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>x>>y;
            v1.push_back(make_pair(y,x));
            v2.push_back(make_pair(x,y));
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(i=0;i<=n-1;i++)
        {
            if(v1[i].first==v2[i].second && v1[i].second==v2[i].first)
                k++;
            else
                break;
        }
        if(k==n)
        {
            cout<<"YES\n";
            x = 0;
            y = 0;
            for(i=0;i<=n-1;i++)
            {
                for(j=1;j<=v2[i].first-x;j++)
                    cout<<"R";
                for(j=1;j<=v2[i].second-y;j++)
                    cout<<"U";
                x = v2[i].first;
                y = v2[i].second;
            }
            cout<<"\n";
        }
        else
            cout<<"NO\n";
        v1.clear();
        v2.clear();
        k = 0;
    }
}
