#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v;
    int k,i,n,sum=0;
    cin>>k;
    for(i=1;;i++)
    {
        n = i;
        while(n)
        {
            sum = sum + n%10;
            n = n / 10;
        }
        if(sum<=10)
        {
            n = 10 - sum;
            v.push_back(i*10+n);
            if(v.size()==10000)
                break;
        }
        sum = 0;
    }
    cout<<v[k-1]<<"\n";
    return 0;
}
