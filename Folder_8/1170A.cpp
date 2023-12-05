#include<iostream>
using namespace std;
int main()
{
    int q,i,p1,p2,minimum,maximum,a,b,c;
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>p1>>p2;
        minimum = (p1<p2)?p1:p2;
        maximum = (p1>p2)?p1:p2;
        a = 1;
        b = minimum - 1;
        c = maximum - b;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}
