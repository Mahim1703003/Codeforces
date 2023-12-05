#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,i,n,x,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        for(i=1;;i++)
        {
            if(i==1)
                sum = sum + 2;
            else
                sum = sum + x;
            if(n<=sum)
                break;
        }
        cout<<i<<"\n";
        sum = 0;
    }
    return 0;
}
