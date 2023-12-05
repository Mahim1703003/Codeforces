#include<iostream>
using namespace std;
int main()
{
    int n,i,k=0;
    cin>>n;
    for(i=1;i>=1;i++)
    {
        if(i%2==1)
        {
            if(n>=1)
            {
                n--;
                k++;
            }
            else
                break;
        }
        else
        {
            if(n>=2)
            {
                n = n - 2;
                k++;
            }
            else
                break;
        }
    }
    cout<<k<<endl;
    return 0;
}
