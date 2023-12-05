#include<iostream>
using namespace std;

long long int last_digit(long long int num)
{
    long long int d;
    while(num)
    {
        if(num%10!=0)
        {
            d = num % 10;
            break;
        }
        num = num / 10;
    }
    return d;
}

long long int zero_counting(long long int num)
{
    long long int ct=0;
    while(num)
    {
        if(num%10==0)
        {
            ct++;
            num = num / 10;
        }
        else
            break;
    }
    return ct;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,k,i,x,num,ct=0,digit;
    cin>>n>>k;
    ct = zero_counting(n);
    if(ct>=k)
        cout<<n<<"\n";
    else
    {
        num = n;
        while(1)
        {
            digit = last_digit(num);
            if(digit%2==1)
            {
                if(digit!=5)
                    num = num * 10;
                else
                    num = num * 2;
            }
            else
                num = num * 5;
            ct = zero_counting(num);
            if(ct>=k)
                break;
        }
        cout<<num<<"\n";
    }
    return 0;
}
