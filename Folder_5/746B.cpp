#include<iostream>
#include<string>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    /*
    use of str.substr() and str.erase()
    string str = "Hello World";
    string s,s2;
    s = str.substr(3,1);
    cout<<str<<"\n"<<s<<endl<<endl;
    s2 = str.erase(4,1);
    cout<<str<<"\n"<<s2;
    */
    /*
    use of ceil() and floor()
    int n;
    n = ceil(4.0/3.0);
    cout<<n;
    */
    list <char> l;
    list <char>::iterator it;
    int n,i;
    string s;
    cin>>n;
    cin>>s;
    l.push_front(s[0]);
    if(n%2==1)
    {
        for(i=1;i<=n-1;i++)
        {
            if(i%2==1)
                l.push_front(s[i]);
            else
                l.push_back(s[i]);
        }
    }
    else
    {
        for(i=1;i<=n-1;i++)
        {
            if(i%2==1)
                l.push_back(s[i]);
            else
                l.push_front(s[i]);
        }
    }
    for(it=l.begin();it!=l.end();it++)
        cout<<*it;
    cout<<endl;
}
