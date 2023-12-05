#include<iostream>
using namespace std;
int main()
{
    int t,n,m,x;
    long long int even1=0,odd1=0,even2=0,odd2=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n--)
        {
            cin>>x;
            if(x%2==0)
                even1++;
            else
                odd1++;
        }
        cin>>m;
        while(m--)
        {
            cin>>x;
            if(x%2==0)
                even2++;
            else
                odd2++;
        }
        cout<<even1*even2+odd1*odd2<<endl;
        even1 = 0;
        odd1 = 0;
        even2 = 0;
        odd2 = 0;
    }
    return 0;
}
