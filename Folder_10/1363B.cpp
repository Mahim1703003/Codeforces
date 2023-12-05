#include<iostream>
#include<vector>
#include<utility>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v;
    string s;
    int t,i,j,ct=1,sum=0,min=1000000,prev_even=0,prev_odd=0,ans;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s.size()==1)
            v.push_back(ct);
        for(i=1;i<=s.size()-1;i++)
        {
            if(s[i]==s[i-1])
            {
                ct++;
                if(i==s.size()-1)
                    v.push_back(ct);
            }
            else
            {
                v.push_back(ct);
                ct = 1;
                if(i==s.size()-1)
                    v.push_back(ct);
            }
        }
        if(v.size()<=2)
            cout<<"0\n";
        else
        {
            for(i=0;i<=v.size()-1;i++)
            {
                if(i%2==0)
                    prev_even = prev_even + v[i];
                else
                    prev_odd = prev_odd + v[i];
                for(j=i+2;j<=v.size()-1;j=j+2)
                    sum = sum + v[j];
                if(i%2==0)
                    ans = prev_odd + sum;
                else
                    ans = prev_even + sum;
                if(ans<min)
                    min = ans;
                sum = 0;
            }
            cout<<min<<"\n";
        }
        ct = 1;
        min = 1000000;
        v.clear();
        sum = 0;
        prev_even = 0;
        prev_even = 0;
    }
    return 0;
}
