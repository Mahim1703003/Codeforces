#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,min_cost,max_cost;
    cin>>n>>m;
    if(n==0)
    {
        if(m==0)
            cout<<"0 0\n";
        else
            cout<<"Impossible\n";
    }
    else if(m==0)
        cout<<n<<" "<<n<<"\n";
    else
    {
        min_cost = n + max(0,m-n);
        max_cost = m + (n-1);
        cout<<min_cost<<" "<<max_cost<<"\n";
    }
    return 0;
}
