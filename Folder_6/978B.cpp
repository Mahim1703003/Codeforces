#include<iostream>
using namespace std;

int main()
{
    int n,i,k=0,sum=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<=n-1;i++)
    {
        if(s[i]=='x')
            k++;
        else
        {
            if(k>=3)
                sum = sum + (k-2);
            k = 0;
        }
    }
    if(k>=3)
        sum = sum + (k-2);
    cout<<sum<<endl;
    return 0;
}
