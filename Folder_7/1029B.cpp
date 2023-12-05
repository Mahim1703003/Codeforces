#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,k=1,max_len=1;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];

    for(i=1;i<=n-1;i++)
    {
        if(a[i]<=2*a[i-1])
        {
            k++;
            if(i==n-1)
                max_len = max(max_len,k);
        }
        else
        {
            max_len = max(max_len,k);
            k = 1;
        }
    }
    cout<<max_len<<"\n";
    return 0;
}
