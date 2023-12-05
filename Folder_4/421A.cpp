#include<iostream>
using namespace std;
int main()
{
    int n,ar,al,x,i;
    cin>>n>>ar>>al;
    int a[n+1] = {0};
    while(ar--)
    {
        cin>>x;
        if(a[x]==0)
            a[x] = 1;
    }
    while(al--)
    {
        cin>>x;
        if(a[x]==0)
            a[x] = 2;
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
