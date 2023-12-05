#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int r,x1,y1,x2,y2,d,n;
    long double d1;
    cin>>r>>x1>>y1>>x2>>y2;
    d1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    d=ceil(d1);
    n=d/(2*r);
    if((d%(2*r))!=0)
        n++;
    cout<<n<<endl;
    return 0;
}
