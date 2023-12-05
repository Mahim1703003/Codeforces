#include<iostream>
#include<string>
#include<vector>
#define lld long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <lld> v;
    string s;
    lld n,l,i,in,k=0,sum=0,sum1=0,sum2=0;
    cin>>s;
    n = s.size();
    if(s.find("v")==std::string::npos)
        cout<<sum<<"\n";
    else
    {
        in = s.find("v");
        i = in;
        while(i<=n-1)
        {
            while(s[i]=='v'&&i<=n-1)
            {
                k++;
                i++;
            }
            v.push_back(k-1);
            sum2 = sum2 + (k-1);
            k = 0;
            if(i>n-1)
                break;
            while(s[i]=='o'&&i<=n-1)
            {
                k++;
                i++;
            }
            v.push_back(k);
            k = 0;
        }
        l = v.size();
        if(l<3)
            cout<<sum<<"\n";
        else
        {
            if(l%2==0)
                l--;
            for(i=0;i<=l-3;i=i+2)
            {
                sum1 = sum1 + v[i];
                sum2 = sum2 - v[i];
                sum = sum + (sum1*v[i+1]*sum2);
            }
            cout<<sum<<"\n";
        }
    }
    return 0;
}
