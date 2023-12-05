#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            cout<<"  ";
        if(i==0)
            cout<<"0";
        else
        {
            for(j=0;j<=i;j++)
                cout<<j<<" ";
        }
        for(j=i-1;j>=0;j--)
        {
            if(j!=0)
                cout<<j<<" ";
            else
                cout<<j;
        }
        cout<<endl;
    }
    for(i=n-1;i>=0;i--)
    {
        for(j=1;j<=n-i;j++)
            cout<<"  ";
        if(i==0)
            cout<<"0";
        else
        {
            for(j=0;j<=i;j++)
                cout<<j<<" ";
        }
        for(j=i-1;j>=0;j--)
        {
            if(j!=0)
                cout<<j<<" ";
            else
                cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
    cout<<"this is my first program in black theme";
    int i;
    for(i=1;i<=10;i++)
    {
        cout<<"it's really cool man";
    }
    if(i==2)
        cout<<"tata";
    else
        cout<<"wow nice";
}*/
int main()
{
    for(i=1;i<=10;i++)
    {
        /// just a loop
    }
    if(i==2)
        cout<<"bla bla";
    else
        cout<<"bla bla";
}
