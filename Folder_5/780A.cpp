#include<iostream>
using namespace std;
int main()
{
    int n,i,k=0,maximum=0;
    cin>>n;
    int a[n+1],b[2*n];
    for(i=0;i<=n;i++)
        a[i]=2;
    for(i=0;i<=2*n-1;i++)
    {
        cin>>b[i];
        a[b[i]]--;
        if(a[b[i]]!=0)
        {
            k++;
            if(k>maximum)
                maximum=k;
        }
        else
            k--;
    }
    cout<<maximum<<endl;
    return 0;
}
