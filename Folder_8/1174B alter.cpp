#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,i,j,in,m=0,k=0,min;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    //sort(a,a+n,oddswap);
    for(i=0;i<=n-2;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if((a[i]+a[j])%2==1)
            {
                if(a[j]<=a[i]){
                     k++;
                if(k==1){
                    min = a[j];
                    in = j;
                }
                else
                {
                    if(a[j]<=min)
                    {
                        min = a[j];
                        in = j;
                    }
                }

            }
        }
    }
    if(k!=0)
        swap(a[i],a[in]);
    k=0;
    }
    //sort(a,a+n,oddswap);
    for(i=0;i<=n-1;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}

