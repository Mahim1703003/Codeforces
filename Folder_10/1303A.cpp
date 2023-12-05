#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,i,k=0,p1,p2;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s.find("1")==std::string::npos)
            cout<<"0\n";
        else
        {
            p1 = s.find_first_of("1");
            p2 = s.find_last_of("1");
            for(i=p1+1;i<=p2-1;i++)
            {
                if(s[i]=='0')
                    k++;
            }
            cout<<k<<endl;
            k = 0;
        }
    }
    return 0;
}
