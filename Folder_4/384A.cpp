#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i%2==1)
            {
                if(j%2==1)
                    k++;
            }
            else
            {
                if(j%2==0)
                    k++;
            }
        }
    }
    cout<<k<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i%2==1)
            {
                if(j%2==1)
                    cout<<"C";
                else
                    cout<<".";
            }
            else
            {
                if(j%2==0)
                    cout<<"C";
                else
                    cout<<".";
            }
        }
        cout<<endl;
    }
    return 0;
}
