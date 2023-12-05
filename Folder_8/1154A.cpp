#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[4],i;
    for(i=0;i<=3;i++)
        cin>>a[i];
    sort(a,a+4,greater<int>());
    for(i=1;i<=3;i++)
        cout<<a[0]-a[i]<<" ";
    cout<<endl;
    return 0;
}
