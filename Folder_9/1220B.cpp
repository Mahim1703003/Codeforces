#include<iostream>
#include<map>
#include<algorithm>
#include<cmath>
#include<vector>
#define lld long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <lld,lld> m;
    vector <lld> v;
    lld n,i,j,x,number;
    bool test = true;
    cin>>n;
    lld a[n+1][n+1],b[n+1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    }
    for(j=2;j<=n;j++)
    {
        number = a[1][j];
        for(i=1;i<=sqrt(number);i++)
        {
            if(number%i==0)
            {
                if(i!=number/i)
                {
                    m[i]++;
                    if(m[i]==n-1)
                        v.push_back(i);
                    m[number/i]++;
                    if(m[number/i]==n-1)
                        v.push_back(number/i);
                }
                else
                {
                    m[i]++;
                    if(m[i]==n-1)
                        v.push_back(i);
                }
            }
        }
    }
    for(i=0;i<=v.size()-1;i++)
    {
        b[1] = v[i];
        for(j=2;j<=n;j++)
            b[j] = a[1][j] / v[i];
        for(j=2;j<=n-1;j++)
        {
            if(b[j]*b[j+1]==a[j][j+1])
                continue;
            else
            {
                test = false;
                break;
            }
        }
        if(test)
            break;
        test = true;
    }
    for(j=1;j<=n;j++)
        cout<<b[j]<<" ";
    cout<<"\n";
    return 0;
}
