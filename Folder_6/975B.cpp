#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int i,j,x,div,rem,sum=0,max=0,a[14],b[14];
    for(i=0;i<=13;i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    for(i=0;i<=13;i++)
    {
        if(a[i]==0)
            continue;
        x = a[i];
        a[i] = 0;
        div = x / 14;
        for(j=0;j<=13;j++)
            a[j] = a[j] + div;
        rem = x % 14;
        j = (i+1) % 14;
        while(rem--)
        {
            a[j]++;
            j = (j+1) % 14;
        }
        for(j=0;j<=13;j++)
        {
            if(a[j]%2==0)
                sum = sum + a[j];
        }
        if(sum>max)
            max = sum;
        for(j=0;j<=13;j++)
            a[j] = b[j];
        sum = 0;
    }
    cout<<max<<"\n";
    return 0;
}
