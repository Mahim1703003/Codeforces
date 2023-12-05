#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,x,y,z,i,j,max=0,sum,rest;
    cin>>n>>a>>b>>c;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            sum = i*a + j*b;
            rest = n - sum;
            if(rest>=0 && rest%c==0)
            {
                x = i;
                y = j;
                z = rest/c;
                if(x+y+z>max)
                    max = x+y+z;
            }
        }
    }
    cout<<max<<endl;
    return 0;
}
