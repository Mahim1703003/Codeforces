#include<iostream>
using namespace std;

int main()
{
    int h,w,i,j,k=0,a,b,ct=0;
    cin>>h>>w;
    char ar[510][510];
    for(i=0;i<=h-1;i++)
    {
        for(j=0;j<=w-1;j++){
            cin>>ar[i][j];
            if(ar[i][j]=='*')
                ct++;
        }
    }
    for(i=1;i<=h-2;i++)
    {
        for(j=1;j<=w-2;j++)
        {
            if(ar[i][j]=='*')
            {
                if(ar[i][j+1]=='*'&&ar[i][j-1]=='*'&&ar[i-1][j]=='*'&&ar[i+1][j]=='*')
                {
                    a = i;
                    b = j;
                    k++;
                }
            }
        }
    }
    if(k!=1)
        cout<<"NO\n";
    else
    {
        i = a;
        j = b;
        k=0;
        while(ar[i][j]=='*')
        {
            k++;
            j++;
            if(j==w)
                break;

        }
        i = a;
        j = b;
        while(ar[i][j]=='*')
        {
            k++;
            j--;
            if(j==-1)
                break;
        }
        i = a;
        j = b;
        while(ar[i][j]=='*')
        {
            k++;
            i++;
            if(i==h)
                break;
        }
        i = a;
        j = b;
        while(ar[i][j]=='*')
        {
            k++;
            i--;
            if(i==-1)
                break;
        }
        k = k - 3;
        if(k==ct)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
