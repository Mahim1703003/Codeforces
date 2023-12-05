#include<iostream>
using namespace std;
int main()
{
    int n,i,x,big;
    cin>>n;
    long long int even_sum=0,odd_sum=0,b;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0)
            even_sum = even_sum + x;
        else
            odd_sum = odd_sum + x;
    }

    b = (even_sum>odd_sum)?even_sum:odd_sum;

    cout<<b<<endl;

    return 0;
}
