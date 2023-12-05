#include<iostream>
using namespace std;
int main()
{
    int t,s,div,rem;
    cin>>t;
    while(t--)
    {
        cin>>s;
        div = s/9;
        rem = s%9;
        if(rem!=0)
            cout<<div*10+rem<<endl;
        else
            cout<<s+(div-1)<<endl;
    }
    return 0;
}
