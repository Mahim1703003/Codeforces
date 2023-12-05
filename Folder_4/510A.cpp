#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,m1,m2,m,v1,v2,v;
    cin>>a>>b>>c>>d;
    m1=a-((a/250)*c);
    m2=(3*a)/10;
    m=(m1>m2)?m1:m2;
    v1=b-((b/250)*d);
    v2=(3*b)/10;
    v=(v1>v2)?v1:v2;
    if(m>v)
        cout<<"Misha\n";
    else if(v>m)
        cout<<"Vasya\n";
    else
        cout<<"Tie\n";
    return 0;
}
