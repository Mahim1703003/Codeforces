#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,k=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]!=b[i])
            k++;
    }
    if(k!=0)
        cout<<"rated\n";
    else
    {
        k = 0;
        sort(a,a+n,greater<int>());
        for(i=0;i<=n-1;i++)
        {
            if(a[i]!=b[i])
                k++;
        }
        if(k==0)
            cout<<"maybe\n";
        else
            cout<<"unrated\n";
    }
    return 0;
}
