#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v1,v2;
    int n,i,x,sum=0,k=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        sum = sum + (a[i]/2);
    }
    if(sum>0)
    {
        for(i=0;i<=n-1;i++)
        {
            if(a[i]>0)
                a[i] = a[i] / 2;
            else if(a[i]<0)
            {
                if(a[i]%2==-1)
                {
                    sum--;
                    if(sum>=0)
                        a[i] = floor((a[i]*1.0)/(2*1.0));
                    else
                        a[i] = a[i] / 2;
                }
                else
                    a[i] = a[i] / 2;
            }
        }
    }
    else if(sum<0)
    {
        for(i=0;i<=n-1;i++)
        {
            if(a[i]<0)
                a[i] = a[i] / 2;
            else if(a[i]>0)
            {
                if(a[i]%2==1)
                {
                    sum++;
                    if(sum<=0)
                        a[i] = ceil((a[i]*1.0)/(2*1.0));
                    else
                        a[i] = a[i] / 2;
                }
                else
                    a[i] = a[i] / 2;
            }
        }
    }
    else
    {
        for(i=0;i<=n-1;i++)
            a[i] = a[i] / 2;
    }
    for(i=0;i<=n-1;i++)
        cout<<a[i]<<"\n";
    return 0;
}
