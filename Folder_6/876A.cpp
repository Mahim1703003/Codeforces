#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,a,b,c,sum=0;
    char ch='R';
    cin>>n>>a>>b>>c;
    n--;
    while(n--)
    {
        if(ch=='R')
        {
            if(a<=b)
            {
                sum = sum + a;
                ch = 'O';
            }
            else
            {
                sum = sum + b;
                ch = 'E';
            }
        }
        else if(ch=='O')
        {
            if(a<=c)
            {
                sum = sum + a;
                ch = 'R';
            }
            else
            {
                sum = sum + c;
                ch = 'E';
            }
        }
        else if(ch=='E')
        {
            if(b<=c)
            {
                sum = sum + b;
                ch = 'R';
            }
            else
            {
                sum = sum + c;
                ch = 'O';
            }
        }
    }
    cout<<sum<<"\n";
    return 0;
}
