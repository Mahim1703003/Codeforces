#include<iostream>
using namespace std;
int main()
{
    int n,i,k=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            k++;
    }
    if(k==0)
        cout<<"EASY\n";
    else
        cout<<"HARD\n";
    return 0;
}
