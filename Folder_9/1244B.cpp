#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    int t,n,p,p1,p2,p3;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        if(s.find("1")==std::string::npos)
            cout<<n<<endl;
        else
        {
            p1 = s.find_first_of("1");
            p1++;
            p1 = n - p1 + 1;
            p2 = s.find_last_of("1");
            p2++;
            cout<<max(2*p1,2*p2)<<endl;
        }
    }
    return 0;
}
