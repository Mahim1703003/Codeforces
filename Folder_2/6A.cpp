#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a[4],i,j,k,tri=0,seg=0,imp=0;
    for(i=0;i<=3;i++)
        cin>>a[i];
    sort(a,a+4);
    for(i=0;i<=3;i++)
    {
        for(j=i+1;j<=3;j++)
        {
            for(k=j+1;k<=3;k++)
            {
                if(a[i]+a[j]>a[k])
                    tri++;
                else if(a[i]+a[j]==a[k])
                    seg++;
                else
                    imp++;
            }
        }
    }
    if(tri!=0)
        cout<<"TRIANGLE\n";
    else if(seg!=0)
        cout<<"SEGMENT\n";
    else
        cout<<"IMPOSSIBLE\n";
    return 0;
}
