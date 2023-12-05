#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
    vector<int>v;
    long long int n,i,m,k=1,ma;
    while(1)
    {
        m = (pow(2,k)-1) * pow(2,k-1);
        if(m<=100000)
            v.push_back(m);
        else
            break;
        k++;
    }
    cin>>n;
    for(i=0;i<=v.size()-1;i++)
    {
        if(n%v[i]==0)
            ma = v[i];
    }
    cout<<ma<<endl;
    return 0;
}
