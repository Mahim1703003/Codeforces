#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,det,h,k=0,no_of_card;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(1)
        {
            det = sqrt(1+4*3*2*n);
            det--;
            h = det / 6;
            if(h>0)
            {
                k++;
                no_of_card = h*(h+1) + (h*(h-1)) / 2;
                n = n - no_of_card;
            }
            else
                break;
        }
        cout<<k<<"\n";
        k = 0;
    }
    return 0;
}
