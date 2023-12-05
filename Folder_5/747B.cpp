#include<iostream>
using namespace std;
int main()
{
    int n,m,i,a=0,g=0,c=0,t=0,k=0;
    cin>>n;
    string s;
    cin>>s;
    if(n%4!=0)
        cout<<"===\n";
    else
    {
        m = n / 4;
        for(i=0;i<=n-1;i++)
        {
            if(s[i]=='A')
                a++;
            else if(s[i]=='G')
                g++;
            else if(s[i]=='C')
                c++;
            else if(s[i]=='T')
                t++;
        }
        if(a<=m)
            a = m - a;
        else
            k++;

        if(g<=m)
            g = m - g;
        else
            k++;

        if(c<=m)
            c = m - c;
        else
            k++;

        if(t<=m)
            t = m - t;
        else
            k++;

        if(k!=0)
            cout<<"===\n";
        else
        {
            k=0;
            for(i=0;i<=n-1;i++)
            {
                if(k==a)
                    break;
                if(s[i]=='?')
                {
                    s[i] = 'A';
                    k++;
                }
            }

            k=0;
            for(i=0;i<=n-1;i++)
            {
                if(k==g)
                    break;
                if(s[i]=='?')
                {
                    s[i] = 'G';
                    k++;
                }
            }

            k=0;
            for(i=0;i<=n-1;i++)
            {
                if(k==c)
                    break;
                if(s[i]=='?')
                {
                    s[i] = 'C';
                    k++;
                }
            }

            k=0;
            for(i=0;i<=n-1;i++)
            {
                if(k==t)
                    break;
                if(s[i]=='?')
                {
                    s[i] = 'T';
                    k++;
                }
            }

            cout<<s<<endl;
        }
    }

    return 0;
}
