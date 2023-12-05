#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,m,total,last,div,rem,sum,i,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        total = n / m;
        last = m % 10;
        if(last==2||last==4||last==6||last==8)
        {
            div = total / 5;
            rem = total % 5;
            sum = div * 20;
            i = last;
            for(k=1;k<=rem;k++)
            {
                sum = sum + i;
                i = (i + last) % 10;
            }
            cout<<sum<<"\n";
        }
        else if(last==5)
        {
            div = total / 2;
            rem = total % 2;
            sum = div * 5;
            i = last;
            for(k=1;k<=rem;k++)
            {
                sum = sum + i;
                i = (i + last) % 10;
            }
            cout<<sum<<"\n";
        }
        else if(last==3||last==7||last==9||last==1)
        {
            div = total / 10;
            rem = total % 10;
            sum = div * 45;
            i = last;
            for(k=1;k<=rem;k++)
            {
                sum = sum + i;
                i = (i + last) % 10;
            }
            cout<<sum<<"\n";
        }
        else
            cout<<"0\n";
    }
    return 0;
}
