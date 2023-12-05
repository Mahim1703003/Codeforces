#include<iostream>
using namespace std;

int digital_count(int digit)
{
    if(digit==0)
        return 2;
    else if(digit==1)
        return 7;
    else if(digit==2)
        return 2;
    else if(digit==3)
        return 3;
    else if(digit==4)
        return 3;
    else if(digit==5)
        return 4;
    else if(digit==6)
        return 2;
    else if(digit==7)
        return 5;
    else if(digit==8)
        return 1;
    else if(digit==9)
        return 2;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,a,b;
    cin>>n;
    a = n / 10;
    b = n % 10;
    cout<<digital_count(a)*digital_count(b)<<"\n";
    return 0;
}
