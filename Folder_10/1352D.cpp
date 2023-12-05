#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,j,Alice=0,sum1=0,Bob=0,sum2=0,ct=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
            cin>>a[i];
        i = 0;
        j = n-1;
        while(1)
        {
            if(i<=j)
            {
                ct++;
                Alice = 0;
                while(Alice<=Bob&&i<=j)
                {
                    sum1 = sum1 + a[i];
                    Alice = Alice + a[i];
                    i++;
                }
                if(i<=j)
                {
                    ct++;
                    Bob = 0;
                    while(Bob<=Alice&&i<=j)
                    {
                        sum2 = sum2 + a[j];
                        Bob = Bob + a[j];
                        j--;
                    }
                }
                else
                    break;
            }
            else
                break;
        }
        cout<<ct<<" "<<sum1<<" "<<sum2<<"\n";
        sum1 = 0;
        Alice = 0;
        sum2 = 0;
        Bob = 0;
        ct = 0;
    }
    return 0;
}
