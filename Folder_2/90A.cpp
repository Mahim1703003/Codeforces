#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int r,g,b;
    cin>>r>>g>>b;
    r = ceil((r*1.0)/2.0);
    g = ceil((g*1.0)/2.0);
    b = ceil((b*1.0)/2.0);
    r = 0 + 3*(r-1);
    g = 1 + 3*(g-1);
    b = 2 + 3*(b-1);
    cout<<30+max(r,max(g,b))<<"\n";
    return 0;
}
