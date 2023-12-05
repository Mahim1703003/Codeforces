#include<iostream>
using namespace std;
int main()
{
    int q;
    long long int a,b,c,div;
    cin>>q;
    while(q--)
    {
        cin>>a>>b>>c;
        div = (a+b+c)/2;
        cout<<div<<endl;
    }
    return 0;
}
