#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v;
    string s;
    int t,n,i,j,ct=0,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n = s.size();
        for(i=0;i<=n-1;i++)
        {
            if(s[i]=='1')
            {
                for(j=i;j<=n-1;j++)
                {
                    if(s[j]=='1')
                        ct++;
                    else
                        break;
                }
                v.push_back(ct);
                ct = 0;
                i = j;
            }
        }
        if(v.size()==0)
            cout<<"0\n";
        else{
        sort(v.begin(),v.end(),greater<int>());
        for(i=0;i<=v.size()-1;i++)
        {
            if(i%2==0)
                sum = sum + v[i];
        }
        cout<<sum<<"\n";
        sum = 0;
        ct = 0;
        v.clear();
        }
    }
    return 0;
}
