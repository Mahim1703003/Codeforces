#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,a,b,c,d;
    cin>>n>>k;
    for(a=0;a<=50;a++)
    {
        for(b=0;b<=50;b++)
        {
            for(c=0;c<=50;c++)
            {
                for(d=0;d<=50;d++)
                {
                    if(a+b+c+d==n)
                    {
                        if(2*a+3*b+4*c+5*d==k)
                        {
                            cout<<a<<"\n";
                            return 0;
                        }
                    }
                }
            }
        }
    }
}
