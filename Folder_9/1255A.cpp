#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int t,a,b,diff,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        diff = abs(a-b);
        x = diff/5;
        diff = diff % 5;
        y = diff/2;
        diff = diff % 2;
        z = diff/1;
        cout<<x+y+z<<endl;
    }
    return 0;
}
