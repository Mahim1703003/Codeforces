#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int d,sumt,i,sum1=0,sum2=0;
    cin>>d>>sumt;
    int a[d],b[d],c[d];
    for(i=0;i<=d-1;i++)
    {
        cin>>a[i]>>b[i];
        sum1 = sum1 + a[i];
        sum2 = sum2 + b[i];
        c[i] = a[i];
    }
    if(sumt>=sum1 && sumt<=sum2)
    {
        cout<<"YES\n";
        i = 0;
        while(sum1!=sumt)
        {
            if(c[i]+1<=b[i])
            {
                c[i]++;
                sum1++;
            }
            i = (i+1) % d;
        }
        for(i=0;i<=d-1;i++)
            cout<<c[i]<<" ";
        cout<<"\n";
    }
    else
        cout<<"NO\n";
    return 0;
}
