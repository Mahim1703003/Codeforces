#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,j,a=0,b=0,ct=0;
    cin>>n;
    int c[n],t[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>c[i];
        t[i] = c[i];
    }
    i = 0;
    j = n-1;
    while(i<=j)
    {
        if(i==j)
        {
            if(c[i]==t[i])
            {
                c[i] = 0;
                a++;
                i++;
            }
            else
            {
                if(ct==1)
                {
                    c[j] = 0;
                    b++;
                    j--;
                }
                else if(ct==2)
                {
                    c[i] = 0;
                    a++;
                    i++;
                }
            }
        }
        else
        {
            if(c[i]<c[j])
            {
                c[j] = c[j] - c[i];
                c[i] = 0;
                a++;
                i++;
                ct=1;
            }
            else if(c[i]>c[j])
            {
                c[i] = c[i] - c[j];
                c[j] = 0;
                b++;
                j--;
                ct = 2;
            }
            else
            {
                c[i] = 0;
                c[j] = 0;
                a++;
                b++;
                i++;
                j--;
            }
        }
    }
    cout<<a<<" "<<b<<"\n";
    return 0;
}
