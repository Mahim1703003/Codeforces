#include<iostream>
using namespace std;
int main()
{
    int n,i,x,n200=0,n100=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x==200)
            n200++;
        if(x==100)
            n100++;
    }
    if(n100%2==0)
    {
        if(n100==0)
        {
            if(n200%2==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"YES\n";
    }
    else
        cout<<"NO\n";
    /**if(n==1)
        cout<<"NO\n";
    else if(n100%2==1)
        cout<<"NO\n";
    else
    {
        if(n200%2==1 && n100==0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }this portion got ac**/


    /**if((n100%2==0&&n200%2==0)) got 4 times wa with this condition
        cout<<"YES\n";
    else if(n100>n200)
    {
        x = n100 - n200*2;
        if(x%2==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else if(n100<n200)
    {
        if(n100%2==0)
        {
            x = n100/2;
            if((n200-x)%2==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";
    }
    else
        cout<<"NO\n";**/

    return 0;
}
