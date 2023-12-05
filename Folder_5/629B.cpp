#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,male=0,female=0,max=0,total,i,j;
    cin>>n;
    char ch[n];
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
        cin>>ch[i]>>a[i]>>b[i];
    for(i=1;i<=366;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            if(i>=a[j] && i<=b[j])
            {
                if(ch[j]=='M')
                    male++;
                else
                    female++;
            }
        }
        total = min(male,female)*2;
        if(total>max)
            max = total;
        male = 0;
        female = 0;
    }
    cout<<max<<"\n";
    return 0;
}
