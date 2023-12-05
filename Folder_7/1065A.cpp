#include<iostream>
using namespace std;
int main()
{
    long long int s,a,b,c,x,y,z,t,i;
    cin>>t;
    for(i=1;i<=t;i++){
    cin>>s>>a>>b>>c;
    x = s/c;
    y = x/a;
    z = y*b;
    cout<<x+z<<endl;
    }
    return 0;
}
