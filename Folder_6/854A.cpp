#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int n,i,j,a,b,k,l=0;
    double div,big=0;
    cin>>n;
    for(i=1;i<=n-1;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(i+j==n)
            {
                for(k=2;k<=sqrt(j);k++)
                {
                    if(i%k==0&&j%k==0)
                    {
                        l++;
                        break;
                    }
                }
                if(l==0){
                div=(i*1.0)/(j*1.0);
                if(div>big)
                {
                    big=div;
                    a=i;
                    b=j;
                }
                }
                l=0;
            }
        }
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
