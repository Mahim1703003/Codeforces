#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v;
    int t,n,i,k=0,rem;
    double number;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n)
        {
            rem = n%10;
            n = n / 10;
            number = (rem*1.0) * pow(10.0,k*1.0);
            if(number!=0)
                v.push_back(number);
            k++;
        }
        cout<<v.size()<<"\n";
        for(i=0;i<=v.size()-1;i++)
            cout<<v[i]<<" ";
        cout<<"\n";
        v.clear();
        k = 0;
    }
    return 0;
}
