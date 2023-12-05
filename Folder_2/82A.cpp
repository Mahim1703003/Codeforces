#include<iostream>
using namespace std;
int main()
{
    int n,a=0,sum=0,diff,s;
    cin>>n;
    while(1)
    {
        if(sum>=n)
        {
            diff = a / 5;
            s = sum - a;
            if(n>s && n<=(s+diff*1))
                cout<<"Sheldon\n";
            else if(n>(s+diff*1) && n<=(s+diff*2))
                cout<<"Leonard\n";
            else if(n>(s+diff*2) && n<=(s+diff*3))
                cout<<"Penny\n";
            else if(n>(s+diff*3) && n<=(s+diff*4))
                cout<<"Rajesh\n";
            else if(n>(s+diff*4) && n<=(s+diff*5))
                cout<<"Howard\n";
            break;
        }
        else
        {
            if(a==0)
                a = a + 5;
            else
                a = 2 * a;
            sum = sum + a;
        }
    }

    return 0;
}
