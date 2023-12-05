#include<iostream>
using namespace std;
int main()
{
    int n,m=0,k=0;
    cin>>n;
    char a[n+1];
    cin>>a;
    for(;;)
    {
        cout<<a[m];
        k++;
        m=m+k;
        if(m>=n)
            break;
    }
    cout<<endl;
    return 0;
}
