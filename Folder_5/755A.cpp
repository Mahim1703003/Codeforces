#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m,i,num;
    cin>>n;
    if(n%2==1)
    {
        if(n!=1)
            cout<<"1\n";
        else
            cout<<"3\n";
    }
    else
    {
        for(m=1;m<=1000;m++)
        {
            num = n*m + 1;
            for(i=2;i<=sqrt(num);i++)
            {
                if(num%i==0)
                {
                    cout<<m<<endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}
