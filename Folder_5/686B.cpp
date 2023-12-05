#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,k=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    while(1)
    {
        for(i=0;i<=n-2;i++)
        {
            if(a[i]>a[i+1])
            {
                k++;
                swap(a[i],a[i+1]);
                cout<<i+1<<" "<<i+2<<"\n";
            }
        }
        if(k==0)
            break;
        k = 0;
    }
    return 0;
}
