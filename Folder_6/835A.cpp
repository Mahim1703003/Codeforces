#include<iostream>
using namespace std;
int main()
{
    int s,v1,v2,t1,t2,m,n;
    cin>>s>>v1>>v2>>t1>>t2;
    m=(2*t1)+(s*v1);
    n=(2*t2)+(s*v2);
    if(m<n)
        cout<<"First\n";
    else if(n<m)
        cout<<"Second\n";
    else
        cout<<"Friendship\n";
    return 0;
}
