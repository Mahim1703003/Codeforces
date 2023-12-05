#include<iostream>
using namespace std;
int main()
{
    int t,a,b,max,min,rem;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        max = (a>b)?a:b;
        min = (a<b)?a:b;
        while(1)
        {
            rem = max % min;
            if(rem==0)
                break;
            max = min;
            min = rem;
        }
        if(min==1)
            cout<<"Finite\n";
        else
            cout<<"Infinite\n";
    }
    return 0;
}
