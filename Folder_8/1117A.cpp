#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,max_number=-1,ct=0,max_length=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        max_number = max(max_number,a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==max_number)
        {
            ct++;
            if(i==n-1)
                max_length = max(max_length,ct);
        }
        else
        {
            max_length = max(max_length,ct);
            ct = 0;
        }
    }
    cout<<max_length<<"\n";
    return 0;
}
