#include<iostream>
using namespace std;
int main()
{
    long long int n,sum=0,sum1=0,i,j,s,k=0,x=0,y=0,z=0,mult=0;
    cin>>n;
    long long int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        sum = sum + a[i];
    }
    if(sum%3==0)
    {
        s = sum / 3;
        if(s!=0){
        for(i=0;i<=n-1;i++)
        {
            sum1 = sum1 + a[i];
            if(k==0)
            {
                if(sum1==s)
                {
                    x++;
                    if(sum1+a[i+1]!=s)
                    {
                        k++;
                        sum1=0;
                        continue;
                    }
                }
            }
            else if(k==1)
            {
                if(sum1==s)
                {
                    y++;
                    if(sum1+a[i+1]!=s)
                    {
                        k++;
                        sum1=0;
                        continue;
                    }
                }
            }
            else
            {
                if(sum1==s)
                {
                    z=1;
                    if(i!=n-1 && sum1+a[i+1]!=s)
                        z=0;
                }
            }
        }
        cout<<x*y*z<<endl;
        }
        else
        {
            for(i=0;i<=n-1;i++)
            {
                if(a[i]==0)
                    k++;
                else
                {
                    for(j=i;j<=n-1;j++)
                    {
                        sum1 = sum1 + a[j];
                        if(sum1==0)
                        {
                            i = j;
                            k++;
                            break;
                        }
                    }
                }
            }
            if(k<=2)
                cout<<"0\n";
            else
            {
                k--;
                while(k!=1)
                {
                    mult = mult + (k-1);
                    k--;
                }
                cout<<mult<<endl;
            }
        }
    }
    else
        cout<<"0\n";

    return 0;
}
