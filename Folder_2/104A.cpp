#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<=10||n>=22)
        cout<<"0\n";
    else
    {
        if(n==20)
            cout<<"15\n";
        else
            cout<<"4\n";
    }
    return 0;
}
