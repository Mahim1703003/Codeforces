#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    long long int i,j,a,mult=1,max_product,l;
    cin>>s;
    l = s.size();
    for(i=0;i<=l-1;i++)
    {
        a = s[i] - '0';
        mult = mult * a;
    }
    max_product = mult;
    mult = 1;
    for(i=0;i<=l-1;i++)
    {
        for(j=0;j<=l-1;j++)
        {
            if(j<i)
            {
                a = s[j] - '0';
                mult = mult * a;
            }
            else if(j==i)
            {
                a = s[j] - '0';
                if(a==1||a==0)
                    a = 1;
                else
                    a--;
                mult = mult * a;
            }
            else if(j>i)
                mult = mult * 9;
        }
        if(mult>max_product)
            max_product = mult;
        mult = 1;
    }
    cout<<max_product<<"\n";
}
