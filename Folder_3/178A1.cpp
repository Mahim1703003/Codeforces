#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    /*
    use of log() in c++
    double d = 16;
    cout<<log(d)<<endl;
    cout<<log10(d)<<endl;
    cout<<log2(d)<<endl;
    */
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,sum=0,in,p;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-2;i++)
    {
        sum = sum + a[i];
        p = floor(log2(n*1.0-1.0-i*1.0));
        in = pow(2,p);
        a[i+in] = a[i+in] + a[i];
        a[i] = 0;
        cout<<sum<<"\n";
    }
    return 0;
}
