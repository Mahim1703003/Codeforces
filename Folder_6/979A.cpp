#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long long int n,d;
    long double div;
    /* when we assign a big interger in a double type variable then it doesn't print what it was
    assigned. so to avoid this problem we need to use setprecision(0) before printing the double type
    variable.
    double f=657436587356385;
    cout<<f<<endl;//it prints 6.57437e+014
    cout<<fixed;
    cout<<setprecision(0)<<f; but it prints 657436587356385
    */
    cin>>n;
    if(n==0)
        cout<<0<<endl;
    else
    {
        n++;
        if(n%2==0)
        {
            n = n / 2;
            cout<<n<<endl;
        }
        else
            cout<<n<<endl;
    }
    return 0;
}
