#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <long long int> v;
    long long int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=1;i<=n;i++)
            cin>>a[i];
        i = 1;
        v.push_back(a[i]);
        i++;
        while(i<=n)
        {
            if(a[i]>a[i-1])
            {
                while(a[i]>a[i-1]&&i<=n)
                    i++;
                v.push_back(a[i-1]);
            }
            else
            {
                while(a[i]<a[i-1]&&i<=n)
                    i++;
                v.push_back(a[i-1]);
            }
        }
        cout<<v.size()<<"\n";
        for(i=0;i<=v.size()-1;i++)
            cout<<v[i]<<" ";
        cout<<"\n";
        v.clear();
    }
    return 0;
}
