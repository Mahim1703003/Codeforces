#include<iostream>
#include<map>
#include<iterator>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <string,int> m;
    map <string,int>::iterator it;
    string str;
    int t,n,i,j,k,number,rem,sum=0,min_nb=-1;
    char ch;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        string s[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            number = a[i];
            while(number)
            {
                rem = number % 2;
                ch = rem + '0';
                s[i] = ch + s[i];
                number = number / 2;
            }
            while(s[i].size()!=11)
                s[i] = '0' + s[i];
        }
        for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=n-1;j++)
            {
                for(k=0;k<=10;k++)
                {
                    if(s[j][k]=='0')
                        str = str + s[i][k];
                    else
                    {
                        if(s[i][k]=='0')
                            str = str + '1';
                        else
                            str = str + '0';
                    }
                }
                m[str]++;
                str.clear();
            }
        }
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second==n)
            {
                str = it->first;
                reverse(str.begin(),str.end());
                for(i=0;i<=10;i++)
                {
                    number = str[i] - '0';
                    sum = sum + number*pow(2.0,i*1.0);
                }
                if(sum>0)
                {
                    if(min_nb==-1)
                        min_nb = sum;
                    else
                        min_nb = min(min_nb,sum);
                }
                sum = 0;
            }
        }
        cout<<min_nb<<"\n";
        m.clear();
        min_nb = -1;
        sum = 0;
        str.clear();
    }
    return 0;
}
