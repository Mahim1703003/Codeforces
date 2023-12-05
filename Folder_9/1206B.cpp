#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0,k=0,x;
    long long sum = 0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x>0)
            sum = sum + (x - 1);
        else if(x<0)
        {
            sum = sum + (-1 - x);
            c++;
        }
        else
        {
            sum++;
            k++;
        }
    }
    if(c%2==0)
        cout<<sum<<endl;
    else
    {
        if(k==0)
            cout<<sum+2<<endl;
        else
            cout<<sum<<endl;
    }
    return 0;
}
