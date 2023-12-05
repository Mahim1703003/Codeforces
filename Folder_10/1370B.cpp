#include<iostream>
#include<vector>
#include<iterator>
#include<utility>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector < pair <int,int> > v1,v2;
    vector < pair <int,int> >::iterator it;
    int t,n,x,len1,len2,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=2*n;i++)
        {
            cin>>x;
            if(x%2==0)
                v1.push_back(make_pair(x,i));
            else
                v2.push_back(make_pair(x,i));
        }
        if(v2.size()%2==0)
        {
            if(v1.size()>=2)
            {
                it = v1.begin();
                v1.erase(it,it+2);
            }
            else
            {
                it = v2.begin();
                v2.erase(it,it+2);
            }
        }
        else
        {
            it = v1.begin();
            v1.erase(it);
            it = v2.begin();
            v2.erase(it);
        }
        len1 = v1.size();
        for(i=0;i<=len1-1;i=i+2)
            cout<<v1[i].second<<" "<<v1[i+1].second<<"\n";
        len2 = v2.size();
        for(i=0;i<=len2-1;i=i+2)
            cout<<v2[i].second<<" "<<v2[i+1].second<<"\n";
        v1.clear();
        v2.clear();
    }
    return 0;
}
