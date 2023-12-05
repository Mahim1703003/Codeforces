#include<iostream>
using namespace std;
int main()
{
    long long int n,x,y,ma,mi,b,w;
    cin>>n;
    cin>>x>>y;
    ma = max(x,y);
    mi = min(x,y);
    w = (mi-1)+(ma-mi);
    b = (n-ma)+(ma-mi);
    if(w<=b)
        cout<<"White\n";
    else
        cout<<"Black\n";
    return 0;
}
