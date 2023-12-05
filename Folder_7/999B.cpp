#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    /*
    use of reverse() and sort()
    string s = "abcde";
    cout<<s<<endl;
    reverse(s.begin()+1,s.begin()+3);
    cout<<s;
    */
    int n,i;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<=n-1;i++)
    {
        if(n%(i+1)==0)
            reverse(s.begin(),s.begin()+(i+1));
    }
    cout<<s<<endl;
    return 0;
}
