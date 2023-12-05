#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,j,k=0,l=0,m,h=0;
    cin>>n;
    for(m=6;m<=n;m++){
    for(i=2;i<=m/2;i++)
    {
        if(m%i==0)
        {
            if(i==2)
                k=0;
            else if(i%2==0)
                k++;
            else if(i%2==1)
            {
                for(j=3;j<=sqrt(i);j=j+2)
                {
                    if(i%j==0)
                    {
                        k++;
                        break;
                    }
                }
            }
        }
        else
            continue;
        if(k==0)
            l++;
        k=0;
    }
    if(l==2)
        h++;
    l=0;
    }
    cout<<h<<endl;
    return 0;
}
