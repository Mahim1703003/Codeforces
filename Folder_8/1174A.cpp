#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,k=0;
    cin>>n;
    m = 2 * n;
    int a[m];
    for(i=0;i<=m-1;i++)
    {
        cin>>a[i];
        if(i>=1)
        {
            if(a[i]==a[i-1])
                k++;
        }
    }
    if(k==m-1)
        cout<<"-1\n";
    else
    {
        sort(a,a+m);
        for(i=0;i<=m-1;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
