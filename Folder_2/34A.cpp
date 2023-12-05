#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,i,i1=0,i2=-1,max=10000,in1,in2,diff;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    while(i2!=0)
    {
        i2 = (i1+1) % n;
        diff = abs(a[i1]-a[i2]);
        if(diff<max)
        {
            max = diff;
            in1 = i1;
            in2 = i2;
        }
        i1++;
    }
    cout<<in1+1<<" "<<in2+1<<endl;
    return 0;
}
