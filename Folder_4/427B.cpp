#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,t,c,i,k=0,no,sum=0;
    cin>>n>>t>>c;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-1;i++)
    {
        if(a[i]<=t)
            k++;
        else
        {
            no = k - c + 1;
            if(no>0)
                sum = sum + no;
            k = 0;
        }
    }
    no = k - c + 1;
    if(no>0)
        sum = sum + no;
    cout<<sum<<"\n";
    return 0;
}
