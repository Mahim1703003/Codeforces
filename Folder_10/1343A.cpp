#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v;
    int t,n,i;
    v.push_back(1);
    for(i=1;i<=29;i++)
        v.push_back(2*pow(2,i)-1);
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=29;i++)
        {
            if(n%v[i]==0)
            {
                cout<<n/v[i]<<"\n";
                break;
            }
        }
    }
    return 0;
}
