#include<iostream>
using namespace std;

int main()
{
    long long int a,b,x,y,ma,mi,rem,n1,n2;
    cin>>a>>b>>x>>y;
    ma = (x>y)?x:y;
    mi = (x<y)?x:y;
    while(1)
    {
        rem = ma % mi;
        if(rem==0)
            break;
        ma = mi;
        mi = rem;
    }
    x = x / mi;
    y = y / mi;
    n1 = a / x;
    n2 = b / y;
    mi = (n1<n2)?n1:n2;
    cout<<mi<<endl;
    return 0;
}
