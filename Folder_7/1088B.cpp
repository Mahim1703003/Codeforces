/**#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long int n,m,i,sum=0,k=0;
    cin>>n>>m;
    long long int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    i = 0;
    while(k!=m)
    {
        if(i>n-1)
        {
            cout<<"0\n";
            k++;
        }
        else
        {
            a[i] = a[i] - sum;
            if(a[i]!=0)
            {
                cout<<a[i]<<endl;
                k++;
            }
            sum = sum + a[i];
            i++;
        }
    }
    return 0;
}**/

#include<iostream>
using namespace std;
int main()
{
    long long int l,r,i,k;
    cin>>l>>r;
    k = (r-l+1)/2;
    cout<<"YES\n";
    for(i=1;i<=k;i++)
    {
        cout<<l<<" ";
        l++;
        cout<<l<<" "<<endl;
        l++;
    }
    return 0;
}
