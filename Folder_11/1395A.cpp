#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,a[4],i,even=0,odd=0,k=0,evennum=0;
    cin>>t;
    while(t--)
    {
        for(i=0;i<=3;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                even++;
            else
                odd++;
        }
        if(even==4)
            cout<<"Yes\n";
        else if(even==3&&odd==1)
            cout<<"Yes\n";
        else if(even==2&&odd==2)
            cout<<"No\n";
        else if(even==1&&odd==3)
        {
            for(i=0;i<=3;i++)
            {
                if(a[i]%2==0)
                {
                    if(i==3)
                        k++;
                    else if(a[i]>0)
                        k++;
                }
            }
            if(k==1)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        else if(odd==4)
            cout<<"Yes\n";
        k = 0;
        even = 0;
        odd = 0;
    }
    return 0;
}
