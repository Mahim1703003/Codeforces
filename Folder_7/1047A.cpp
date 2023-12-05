#include<iostream>
using namespace std;
int main()
{
    int n,a=1,b=1;
    cin>>n;
    n=n-2;
    if(n%3==0)
    {
        n--;
        b++;
    }
    cout<<a<<" "<<b<<" "<<n<<endl;
    return 0;
}
