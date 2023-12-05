#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a,div;
    cin>>n;
    a = sqrt(n);
    div = n / a;
    if(a*a==n)
        cout<<4*a<<endl;
    else
    {
        if(n==1)
            cout<<"4\n";
        else if(n==2)
            cout<<"6\n";
        else if(n==3)
            cout<<"8\n";
        else
        {
            if(n%a==0)
                cout<<a+a+div+div<<endl;
            else
                cout<<a+(a+1)+div+(div+1)<<endl;
        }
    }
    return 0;

}
