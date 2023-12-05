#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,s,i,sum=0,max_number=0,index=0,index2,k1=0,k2=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        long long int a[n];
        for(i=0;i<=n-1;i++)
            cin>>a[i];
        for(i=0;i<=n-1;i++)
        {
            sum = sum + a[i];
            if(sum<=s)
            {
                if(a[i]>max_number)
                {
                    max_number = a[i];
                    index = i;
                }
            }
            else
            {
                index2 = i;
                break;
            }
        }
        if(i==n)
            cout<<"0\n";
        else
        {
            sum = 0;
            for(i=0;i<=n-1;i++)
            {
                if(i==index)
                    continue;
                sum = sum + a[i];
                if(sum<=s)
                    k1++;
                else
                    break;
            }
            sum = 0;
            for(i=0;i<=n-1;i++)
            {
                if(i==index2)
                    continue;
                sum = sum + a[i];
                if(sum<=s)
                    k2++;
                else
                    break;
            }
            if(k1>=k2)
                cout<<index+1<<"\n";
            else
                cout<<index2+1<<"\n";
        }
        sum = 0;
        max_number = 0;
        index = 0;
        k1 = 0;
        k2 = 0;
    }
    return 0;
}
