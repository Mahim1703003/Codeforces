#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    long long int n,k,x,i,j,sum;
    cin>>n>>k;
    while(n--)
    {
        cin>>x;
        m[x%k]++;
    }
    sum = m[0]/2;
    i = 1;
    j = k - 1;
    while(i<=j)
    {
        if(i==j)
            sum = sum + m[i]/2;
        else
            sum = sum + min(m[i],m[j]);
        i++;
        j--;
    }
    cout<<sum*2<<"\n";
    return 0;
}
