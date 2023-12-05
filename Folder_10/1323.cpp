#include<iostream>
using namespace std;
int main()
{
    int t,i,n,even=0,odd=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                even++;
            else
                odd++;
        }
        if(even==0)
        {
            if(odd==1)
                cout<<"-1\n";
            else
                cout<<"2\n1 2\n";
        }
        else
        {
            cout<<"1\n";
            for(i=0;i<=n-1;i++)
            {
                if(a[i]%2==0)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        even = 0;
        odd = 0;
    }
    return 0;
}
