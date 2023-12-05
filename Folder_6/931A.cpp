#include<iostream>
using namespace std;
int main()
{
    int a,b,ma,mi,av,n1,n2;
    cin>>a>>b;
    ma = (a>b)?a:b;
    mi = (a<b)?a:b;
    av = (ma + mi) / 2;
    n1 = ma - av;
    n2 = av - mi;
    cout<<(n1*(n1+1))/2 + (n2*(n2+1))/2 <<endl;
    return 0;
}
