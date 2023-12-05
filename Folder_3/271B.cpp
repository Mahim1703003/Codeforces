#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int prime[100004];

int main()
{
    /*ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/
    vector <int> v;
    int n,m,i,j,min_steps,sum=0,d,left,right,mid;
    prime[0] = 1;
    prime[1] = 1;
    for(i=2;i<=sqrt(100003);i++)
    {
        if(prime[i]==0)
        {
            for(j=2;i*j<=100003;j++)
                prime[i*j]++;
        }
    }
    for(i=2;i<=100003;i++)
    {
        if(prime[i]==0)
            v.push_back(i);
    }
    cin>>n>>m;
    int a[n][m];
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-1;j++)
            cin>>a[i][j];
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-1;j++)
        {
            d = a[i][j];
            if(prime[d]!=0)
            {
                left = 0;
                right = v.size()-1;
                while(left<=right)
                {
                    mid = (left + right) / 2;
                    if(d<v[mid])
                        right = mid - 1;
                    else
                        left = mid + 1;
                }
                sum = sum + (v[left]-d);
            }
        }
        if(i==0)
            min_steps = sum;
        else
            min_steps = min(min_steps,sum);
        sum = 0;
    }
    for(j=0;j<=m-1;j++)
    {
        for(i=0;i<=n-1;i++)
        {
            d = a[i][j];
            if(prime[d]!=0)
            {
                left = 0;
                right = v.size()-1;
                while(left<=right)
                {
                    mid = (left + right) / 2;
                    if(d<v[mid])
                        right = mid - 1;
                    else
                        left = mid + 1;
                }
                sum = sum + (v[left]-d);
            }
        }
        min_steps = min(min_steps,sum);
        sum = 0;
    }
    cout<<min_steps<<"\n";
    return 0;
}
