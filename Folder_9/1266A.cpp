#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    /*ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int n,i,ct0,ct2,ct4,ct6,ct8,x,sum=0;
    cin>>n;
    while(n--)
    {
        cin>>s;
        ct0 = count(s.begin(),s.end(),'0');
        if(ct0!=0)
        {
            ct2 = count(s.begin(),s.end(),'2');
            ct4 = count(s.begin(),s.end(),'4');
            ct6 = count(s.begin(),s.end(),'6');
            ct8 = count(s.begin(),s.end(),'8');
            if(ct0>=2 || ct2>=1 || ct4>=1 || ct6>=1 || ct8>=1)
            {
                for(i=0;i<=s.size()-1;i++)
                {
                    x = s[i] - '0';
                    sum = sum + x;
                }
                if(sum%3==0)
                    cout<<"red\n";
                else
                    cout<<"cyan\n";
            }
            else
                cout<<"cyan\n";
        }
        else
            cout<<"cyan\n";
        sum = 0;
    }
    return 0;
}
