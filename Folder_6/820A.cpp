#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int c,v0,v1,a,l,sum=0,d,i;
    cin>>c>>v0>>v1>>a>>l;
    for(i=0;i>=0;i++)
    {
        if(i==0)
            sum = sum + v0;
        else
        {
            d = v0 + i*a;
            if(d<=v1)
                sum = sum + d - l;
            else
                sum = sum + v1 - l;
        }
        if(sum>=c)
            break;
    }
    cout<<i+1<<"\n";
    return 0;
}
