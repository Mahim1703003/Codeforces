#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[3],k;
    cin>>n>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if(n%a[0]==0)
        cout<<n/a[0]<<endl;
    else
    {
        k=n/a[1];
        if(n%a[1]==0)
            cout<<k<<endl;
        else
        {
            if((n%a[1])%a[0]==0)
                cout<<k+((n%a[1])/a[0])<<endl;
            else
            {
                k=n/a[2];
                if(n%a[2]==0)
                    cout<<++k<<endl;
                else
                {
                    if((n%a[2])%a[0]==0)
                        cout<<k+((n%a[2])/a[0])<<endl;
                    else if((n%a[2])%a[1]==0)
                        cout<<k+((n%a[2])/a[1])<<endl;
                    else if(((n%a[2])%a[1])%a[0]==0)
                        cout<<k+((n%a[2])/a[1])+(((n%a[2])%a[1])%a[0])<<endl;
                }
            }
        }
    }
    return 0;
}
