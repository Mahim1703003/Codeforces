#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a[4],i,j,sum=0,k=0,temp;
    for(i=0;i<=3;i++)
    {
        cin>>a[i];
        sum = sum + a[i];
    }
    for(i=0;i<=3;i++)
    {
        temp = sum - a[i];
        if(a[i]==temp)
            k++;
    }
    for(i=0;i<=3;i++)
    {
        for(j=i+1;j<=3;j++)
        {
            temp = sum - a[i] - a[j];
            if(a[i]+a[j]==temp)
                k++;
        }
    }
    if(k!=0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
