#include<iostream>
using namespace std;

int main()
{
    int n,i,k=1,l=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(k<=2)
        {
            cout<<"a";
            k++;
        }
        else
        {
            if(l<=2)
            {
                cout<<"b";
                l++;
            }
            if(l==3)
            {
                k=1;
                l=1;
            }
        }
    }
    cout<<endl;
    return 0;
}
