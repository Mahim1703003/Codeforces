#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <long long int> v;
    long long int n,a,b,c,d,e,f,g,h,i,sum,num,len;
    cin>>n;
    for(a=0;a<=9;a++)
    {
        for(b=0;b<=9;b++)
        {
            for(c=0;c<=9;c++)
            {
                for(d=0;d<=9;d++)
                {
                    for(e=0;e<=9;e++)
                    {
                        for(f=0;f<=9;f++)
                        {
                            for(g=0;g<=9;g++)
                            {
                                for(h=0;h<=9;h++)
                                {
                                    sum = a*1e8+b*1e7+c*1e6+d*1e5+e*1e4+f*1e3+g*1e2+h*1e1;

                                    i = 0;
                                    num = sum + i;
                                    num = num + a + b + c + d + e + f + g + h + i;
                                    if(num==n)
                                        v.push_back(sum+i);

                                    i = 1;
                                    num = sum + i;
                                    num = num + a + b + c + d + e + f + g + h + i;
                                    if(num==n)
                                        v.push_back(sum+i);

                                    i = 2;
                                    num = sum + i;
                                    num = num + a + b + c + d + e + f + g + h + i;
                                    if(num==n)
                                        v.push_back(sum+i);

                                    i = 3;
                                    num = sum + i;
                                    num = num + a + b + c + d + e + f + g + h + i;
                                    if(num==n)
                                        v.push_back(sum+i);

                                    i = 4;
                                    num = sum + i;
                                    num = num + a + b + c + d + e + f + g + h + i;
                                    if(num==n)
                                        v.push_back(sum+i);

                                    i = 5;
                                    num = sum + i;
                                    num = num + a + b + c + d + e + f + g + h + i;
                                    if(num==n)
                                        v.push_back(sum+i);

                                    i = 6;
                                    num = sum + i;
                                    num = num + a + b + c + d + e + f + g + h + i;
                                    if(num==n)
                                        v.push_back(sum+i);

                                    i = 7;
                                    num = sum + i;
                                    num = num + a + b + c + d + e + f + g + h + i;
                                    if(num==n)
                                        v.push_back(sum+i);

                                    i = 8;
                                    num = sum + i;
                                    num = num + a + b + c + d + e + f + g + h + i;
                                    if(num==n)
                                        v.push_back(sum+i);

                                    i = 9;
                                    num = sum + i;
                                    num = num + a + b + c + d + e + f + g + h + i;
                                    if(num==n)
                                        v.push_back(sum+i);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    len = v.size();
    cout<<len<<"\n";
    for(i=0;i<=len-1;i++)
        cout<<v[i]<<"\n";
    return 0;
}
