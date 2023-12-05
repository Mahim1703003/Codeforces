#include<iostream>
using namespace std;
int main()
{
    int n,i,l,r,ro=0,rc=0,lo=0,lc=0,s1,s2;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>l>>r;
        if(l==0)
            lc++;
        else
            lo++;
        if(r==0)
            rc++;
        else
            ro++;
    }
    s1 = (lo<lc)?lo:lc;
    s2 = (ro<rc)?ro:rc;
    cout<<s1+s2<<endl;
    return 0;
}
