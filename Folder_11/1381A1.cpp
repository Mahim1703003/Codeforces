#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v;
    string a,b;
    int t,n,i,j,l;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        a = " " + a;
        b = " " + b;
        for(i=n;i>=1;i--)
        {
            if(b[i]==a[i])
                continue;
            if(b[i]==a[1])
            {
                v.push_back(1);
                if(a[1]=='1')
                    a[1] = '0';
                else
                    a[1] = '1';
            }
            v.push_back(i);
            for(j=1;j<=i;j++)
            {
                if(a[j]=='1')
                    a[j] = '0';
                else
                    a[j] = '1';
            }
            reverse(a.begin()+1,a.begin()+i+1);
        }
        l = v.size();
        cout<<l<<" ";
        for(i=0;i<=l-1;i++)
            cout<<v[i]<<" ";
        cout<<"\n";
        v.clear();
    }
    return 0;
}
