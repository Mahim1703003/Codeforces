#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v;
    string s;
    int t,n,k,i,j,m,ct=0,len,diff,rem,div;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cin>>s;
        for(i=0;i<=n-1;i++)
        {
            if(s[i]=='1')
                v.push_back(i+1);
        }
        if(v.size()==0)
        {
            j = 1;
            while(j<=n)
            {
                ct++;
                j = j + (k+1);
            }
        }
        else
        {
            m = v[0];
            while(m-(k+1)>=1)
            {
                ct++;
                m = m - (k+1);
            }
            len = v.size();
            j = 0;
            while(1)
            {
                if(j==len-1)
                    break;
                diff = v[j+1] - v[j] - 1;
                div = diff / (k+1);
                rem = diff % (k+1);
                if(rem!=k)
                    ct = ct + max(0,div-1);
                else
                    ct = ct + div;
                j++;
            }
            m = v[j];
            while(m+(k+1)<=n)
            {
                m = m + (k+1);
                ct++;
            }
        }
        cout<<ct<<"\n";
        ct = 0;
        v.clear();
    }
    return 0;
}
