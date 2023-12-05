#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,i,a[3],diff,sum=0,small,big;
    cin>>t;
    while(t--)
    {
        for(i=0;i<=2;i++)
            cin>>a[i];
        sort(a,a+3);
        if(a[1]!=a[2])
        {
            diff = a[2] - a[1];
            if(a[0]>=diff)
            {
                a[0] = a[0] - diff;
                a[2] = a[2] - diff;
                sum = sum + diff;
            }
            else
            {
                a[2] = a[2] - a[0];
                sum = sum + a[0];
                a[0] = 0;
            }
        }
        sum = sum + a[0];
        small = a[0] / 2;
        big = a[0] - small;
        a[1] = a[1] - big;
        a[2] = a[2] - small;
        sum = sum + a[1];
        cout<<sum<<"\n";
        sum = 0;
    }
    return 0;
}
