#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int k,n,s,p,sheetpereach,totalsheet,noofpack;
    cin>>k>>n>>s>>p;
    sheetpereach = ceil((n*1.0)/(s*1.0));
    totalsheet = sheetpereach * k;
    noofpack = ceil((totalsheet*1.0)/(p*1.0));
    cout<<noofpack<<endl;
    return 0;
}
