#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long int a[3],d,k=0,mi;
    cin>>a[0]>>a[1]>>a[2]>>d;
    sort(a,a+3);
    if(a[1]-a[0]>=d && a[2]-a[0]>=d){

    }
    else
    {
        mi = ((a[1]-a[0])<(a[2]-a[0]))?a[1]-a[0]:a[2]-a[0];
        k = k + (d - mi);
        a[0] = a[0] - (d - mi);
    }
    if(a[2]-a[0]>=d && a[2]-a[1]>=d){

    }
    else
    {
        mi = ((a[2]-a[0])<(a[2]-a[1]))?a[2]-a[0]:a[2]-a[1];
        k = k + (d - mi);
        a[2] = a[2] - (d - mi);
    }
    cout<<k<<endl;
    return 0;
}
