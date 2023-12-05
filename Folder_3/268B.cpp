#include<iostream>
using namespace std;

int main()
{
    int i=2,n;
    long long int sum = 0;
    cin>>n;
    sum = sum + n;
    n--;
    while(n)
    {
        sum = sum + (1 + (n-1)*i);
        n--;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}
