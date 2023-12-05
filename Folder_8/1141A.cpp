#include<iostream>
using namespace std;
int main()
{
    int n,m,k=0;
    cin>>n>>m;
    if(m%n==0)
    {
        int d;
        d = m / n;
        while(d%2==0)
        {
            k++;
            d = d / 2;
        }
        while(d%3==0)
        {
            k++;
            d = d / 3;
        }
        if(d==1)
            cout<<k<<endl;
        else
            cout<<"-1\n";
    }
    else
        cout<<"-1\n";
    return 0;
}
