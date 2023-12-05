#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int i,sum=0,n,k=1;
    cin>>s;
    if(s.size()==1)
        cout<<"0\n";
    else
    {
        for(i=0;i<=s.size()-1;i++)
        {
            n = s[i] - '0';
            sum = sum + n;
        }
        n = sum;
        sum = 0;
        while(n/10!=0)
        {
            k++;
            while(n)
            {
                sum = sum + (n%10);
                n = n / 10;
            }
            n = sum;
            sum = 0;
        }
        cout<<k<<"\n";
    }
    return 0;
}
