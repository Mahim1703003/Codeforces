#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j,n;
    long long int sum = 0;
    cin>>a>>b;
    for(j=a;j<=b;j++)
    {
        n = j;
        while(n)
        {
            i = n % 10;
            if(i==1)
                sum = sum + 2;
            else if(i==2||i==3||i==5)
                sum = sum + 5;
            else if(i==4)
                sum = sum + 4;
            else if(i==6||i==9||i==0)
                sum = sum + 6;
            else if(i==7)
                sum = sum + 3;
            else if(i==8)
                sum = sum + 7;
            n = n / 10;
        }
    }
    cout<<sum<<endl;
    return 0;
}
