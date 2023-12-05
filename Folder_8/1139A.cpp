#include<iostream>
using namespace std;

int main()
{
    int l;
    cin>>l;
    char a[l+1];
    cin>>a;
    long long int sum = 0;
    int i,n;
    for(i=0;i<l;i++)
    {
        n = a[i] - '0';
        if(n%2==0)
            sum = sum + (i+1);
    }
    cout<<sum<<endl;
    return 0;
}
