#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <long long int,long long int> m;
    long long int a,b,c,d,i,sum=0,ct=0;
    cin>>a>>b>>c>>d;
    for(i=0;i<=100000;i++)
    {
        sum = b+i*a;
        m[sum]++;
    }
    sum = 0;
    for(i=0;i<=100000;i++)
    {
        sum = d+i*c;
        m[sum]++;
        if(m[sum]==2)
        {
            ct++;
            break;
        }
    }
    if(ct==1)
        cout<<sum<<"\n";
    else
        cout<<"-1\n";
    return 0;
}
