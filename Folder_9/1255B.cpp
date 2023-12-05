#include<iostream>
using namespace std;
int main()
{
    int t,n,m,i,sum=0,s1=100000,in1,s2=100000,in2;

    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]<s1)
            {
                s1 = a[i];
                in1 = i;
            }
        }
        if(m<n||n==2)
        {
            cout<<"-1\n";
            continue;
        }
        for(i=1;i<=n;i++)
        {
            if(i==in1)
                continue;
            if(a[i]<s2)
            {
                s2 = a[i];
                in2 = i;
            }
        }
        for(i=1;i<=n;i++)
        {
            if(i==n)
                sum = sum + (a[i] + a[1]);
            else
                sum = sum + (a[i] + a[i+1]);
        }
        sum = sum + (m-n)*(s1+s2);
        cout<<sum<<endl;
        for(i=1;i<=n;i++)
        {
            if(i==n)
                cout<<i<<" 1"<<endl;
            else
                cout<<i<<" "<<i+1<<endl;
        }
        for(i=1;i<=(m-n);i++)
            cout<<in1<<" "<<in2<<endl;
        sum = 0;
        s1 = 100000;
        s2 = 100000;
    }
    return 0;
}
