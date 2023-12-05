#include<iostream>
using namespace std;
int main()
{
    int a[3],p,sum=0,t,max=0,i;
    cin>>t;
    while(t--)
    {
        for(i=0;i<=2;i++)
        {
            cin>>a[i];
            if(a[i]>max)
                max = a[i];
        }
        cin>>p;
        for(i=0;i<=2;i++)
            sum = sum + (max - a[i]);
        if(sum<=p)
        {
            if((p-sum)%3==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";

        max = 0;
        sum = 0;
    }

    return 0;
}
