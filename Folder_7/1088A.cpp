#include<iostream>
using namespace std;
int main()
{
    int x,i,j,k=0;
    cin>>x;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0&&i*j>x&&(i/j)<x)
            {
                k++;
                break;
            }
        }
        if(k!=0)
            break;
    }
    if(k!=0)
        cout<<i<<" "<<j<<endl;
    else
        cout<<"-1\n";
    return 0;
}
