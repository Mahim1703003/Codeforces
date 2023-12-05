#include<iostream>
using namespace std;
int main()
{
    long long int x,y,z,div1,div2,rem1,rem2,cd,minimum;
    cin>>x>>y>>z;
    div1 = x / z;
    rem1 = x % z;
    div2 = y / z;
    rem2 = y % z;
    cd = (rem1+rem2) / z;
    cout<<div1+div2+cd<<" ";
    if(cd==0)
        minimum = 0;
    else
        minimum = min(z*cd-rem1,z*cd-rem2);
    cout<<minimum<<endl;
    return 0;
}
