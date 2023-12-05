#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <long long int> v;
    long long int n,a,b,c,d,e,f,g,h,i,j,sum,ct=0;
    cin>>n;
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
                                            sum = a*1e9+b*1e8+c*1e7+d*1e6+e*1e5+f*1e4+g*1e3+h*1e2+i*1e1+j*1e0;
                                            if(sum<=n)
                                                ct++;
                                            else
                                            {
                                                cout<<ct-1<<"\n";
                                                return 0;
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
    }
}
