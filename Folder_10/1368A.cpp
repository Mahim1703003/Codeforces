#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <long long int> v;
    long long int t,a,b,n,i,m;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        if(max(a,b)>n)
            cout<<"0\n";
        else
        {
            v.push_back(min(a,b));
            v.push_back(max(a,b));
            for(i=1,m=2;i>=0;i++,m++)
            {
                v.push_back(v[m-1]+v[m-2]);
                if(v[m-1]+v[m-2]>n)
                    break;
            }
            cout<<i<<"\n";
        }
        v.clear();
    }
    return 0;
}
