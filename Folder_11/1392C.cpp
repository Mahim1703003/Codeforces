#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,i,maxh,max_operation=0,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            if(i==0)
                maxh = a[i];
            else
            {
                if(a[i]<a[i-1])
                {
                    if(a[i-1]>=maxh)
                    {
                        sum = sum + max_operation;
                        maxh = a[i-1];
                        max_operation = 0;
                    }
                }
                if(maxh>a[i])
                    max_operation = max(max_operation,maxh-a[i]);
            }
        }
        sum = sum + max_operation;
        cout<<sum<<"\n";
        sum = 0;
        max_operation = 0;
    }
    return 0;
}
