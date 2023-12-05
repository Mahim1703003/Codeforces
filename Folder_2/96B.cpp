#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    long long int n,a,b,c,d,e,f,g,h,i,j,num,zero=0,one=0;
    cin>>n;

    /// for 2
    for(a=0;a<=1;a++)
    {
        for(b=0;b<=1;b++)
        {
            if(a==0)
            {
                zero++;
                s = s + '4';
            }
            else
            {
                one++;
                s = s + '7';
            }
            if(b==0)
            {
                zero++;
                s = s + '4';
            }
            else
            {
                one++;
                s = s + '7';
            }
            if(zero==one)
            {
                stringstream str1(s);
                str1>>num;
                if(num>=n)
                {
                    cout<<num<<"\n";
                    return 0;
                }
            }
            zero = 0;
            one = 0;
            s.clear();
        }
    }

    /// for 4
    for(a=0;a<=1;a++)
    {
        for(b=0;b<=1;b++)
        {
            for(c=0;c<=1;c++)
            {
                for(d=0;d<=1;d++)
                {
                    if(a==0)
                    {
                        zero++;
                        s = s + '4';
                    }
                    else
                    {
                        one++;
                        s = s + '7';
                    }
                    if(b==0)
                    {
                        zero++;
                        s = s + '4';
                    }
                    else
                    {
                        one++;
                        s = s + '7';
                    }
                    if(c==0)
                    {
                        zero++;
                        s = s + '4';
                    }
                    else
                    {
                        one++;
                        s = s + '7';
                    }
                    if(d==0)
                    {
                        zero++;
                        s = s + '4';
                    }
                    else
                    {
                        one++;
                        s = s + '7';
                    }
                    if(zero==one)
                    {
                        stringstream str2(s);
                        str2>>num;
                        if(num>=n)
                        {
                            cout<<num<<"\n";
                            return 0;
                        }
                    }
                    zero = 0;
                    one = 0;
                    s.clear();
                }
            }
        }
    }

    /// for 6
    for(a=0;a<=1;a++)
    {
        for(b=0;b<=1;b++)
        {
            for(c=0;c<=1;c++)
            {
                for(d=0;d<=1;d++)
                {
                    for(e=0;e<=1;e++)
                    {
                        for(f=0;f<=1;f++)
                        {
                            if(a==0)
                            {
                                zero++;
                                s = s + '4';
                            }
                            else
                            {
                                one++;
                                s = s + '7';
                            }
                            if(b==0)
                            {
                                zero++;
                                s = s + '4';
                            }
                            else
                            {
                                one++;
                                s = s + '7';
                            }
                            if(c==0)
                            {
                                zero++;
                                s = s + '4';
                            }
                            else
                            {
                                one++;
                                s = s + '7';
                            }
                            if(d==0)
                            {
                                zero++;
                                s = s + '4';
                            }
                            else
                            {
                                one++;
                                s = s + '7';
                            }
                            if(e==0)
                            {
                                zero++;
                                s = s + '4';
                            }
                            else
                            {
                                one++;
                                s = s + '7';
                            }
                            if(f==0)
                            {
                                zero++;
                                s = s + '4';
                            }
                            else
                            {
                                one++;
                                s = s + '7';
                            }
                            if(zero==one)
                            {
                                stringstream str3(s);
                                str3>>num;
                                if(num>=n)
                                {
                                    cout<<num<<"\n";
                                    return 0;
                                }
                            }
                            zero = 0;
                            one = 0;
                            s.clear();
                        }
                    }
                }
            }
        }
    }

    /// for 8
    for(a=0;a<=1;a++)
    {
        for(b=0;b<=1;b++)
        {
            for(c=0;c<=1;c++)
            {
                for(d=0;d<=1;d++)
                {
                    for(e=0;e<=1;e++)
                    {
                        for(f=0;f<=1;f++)
                        {
                            for(g=0;g<=1;g++)
                            {
                                for(h=0;h<=1;h++)
                                {
                                    if(a==0)
                                    {
                                        zero++;
                                        s = s + '4';
                                    }
                                    else
                                    {
                                        one++;
                                        s = s + '7';
                                    }
                                    if(b==0)
                                    {
                                        zero++;
                                        s = s + '4';
                                    }
                                    else
                                    {
                                        one++;
                                        s = s + '7';
                                    }
                                    if(c==0)
                                    {
                                        zero++;
                                        s = s + '4';
                                    }
                                    else
                                    {
                                        one++;
                                        s = s + '7';
                                    }
                                    if(d==0)
                                    {
                                        zero++;
                                        s = s + '4';
                                    }
                                    else
                                    {
                                        one++;
                                        s = s + '7';
                                    }
                                    if(e==0)
                                    {
                                        zero++;
                                        s = s + '4';
                                    }
                                    else
                                    {
                                        one++;
                                        s = s + '7';
                                    }
                                    if(f==0)
                                    {
                                        zero++;
                                        s = s + '4';
                                    }
                                    else
                                    {
                                        one++;
                                        s = s + '7';
                                    }
                                    if(g==0)
                                    {
                                        zero++;
                                        s = s + '4';
                                    }
                                    else
                                    {
                                        one++;
                                        s = s + '7';
                                    }
                                    if(h==0)
                                    {
                                        zero++;
                                        s = s + '4';
                                    }
                                    else
                                    {
                                        one++;
                                        s = s + '7';
                                    }
                                    if(zero==one)
                                    {
                                        stringstream str4(s);
                                        str4>>num;
                                        if(num>=n)
                                        {
                                            cout<<num<<"\n";
                                            return 0;
                                        }
                                    }
                                    zero = 0;
                                    one = 0;
                                    s.clear();
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    /// for 10
    for(a=0;a<=1;a++)
    {
        for(b=0;b<=1;b++)
        {
            for(c=0;c<=1;c++)
            {
                for(d=0;d<=1;d++)
                {
                    for(e=0;e<=1;e++)
                    {
                        for(f=0;f<=1;f++)
                        {
                            for(g=0;g<=1;g++)
                            {
                                for(h=0;h<=1;h++)
                                {
                                    for(i=0;i<=1;i++)
                                    {
                                        for(j=0;j<=1;j++)
                                        {
                                            if(a==0)
                                            {
                                                zero++;
                                                s = s + '4';
                                            }
                                            else
                                            {
                                                one++;
                                                s = s + '7';
                                            }
                                            if(b==0)
                                            {
                                                zero++;
                                                s = s + '4';
                                            }
                                            else
                                            {
                                                one++;
                                                s = s + '7';
                                            }
                                            if(c==0)
                                            {
                                                zero++;
                                                s = s + '4';
                                            }
                                            else
                                            {
                                                one++;
                                                s = s + '7';
                                            }
                                            if(d==0)
                                            {
                                                zero++;
                                                s = s + '4';
                                            }
                                            else
                                            {
                                                one++;
                                                s = s + '7';
                                            }
                                            if(e==0)
                                            {
                                                zero++;
                                                s = s + '4';
                                            }
                                            else
                                            {
                                                one++;
                                                s = s + '7';
                                            }
                                            if(f==0)
                                            {
                                                zero++;
                                                s = s + '4';
                                            }
                                            else
                                            {
                                                one++;
                                                s = s + '7';
                                            }
                                            if(g==0)
                                            {
                                                zero++;
                                                s = s + '4';
                                            }
                                            else
                                            {
                                                one++;
                                                s = s + '7';
                                            }
                                            if(h==0)
                                            {
                                                zero++;
                                                s = s + '4';
                                            }
                                            else
                                            {
                                                one++;
                                                s = s + '7';
                                            }
                                            if(i==0)
                                            {
                                                zero++;
                                                s = s + '4';
                                            }
                                            else
                                            {
                                                one++;
                                                s = s + '7';
                                            }
                                            if(j==0)
                                            {
                                                zero++;
                                                s = s + '4';
                                            }
                                            else
                                            {
                                                one++;
                                                s = s + '7';
                                            }
                                            if(zero==one)
                                            {
                                                stringstream str5(s);
                                                str5>>num;
                                                if(num>=n)
                                                {
                                                    cout<<num<<"\n";
                                                    return 0;
                                                }
                                            }
                                            zero = 0;
                                            one = 0;
                                            s.clear();
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
