#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3,a,b,c,c1,c2,k=0;
    cin>>s1>>s2>>s3;
    for(a=1;a<=s1;a++)
    {
        if(s1%a==0)
        {
            b = s1 / a;
            if(s2%b==0 && s3%a==0)
            {
                c1 = s2 / b;
                c2 = s3 / a;
                if(c1==c2)
                {
                    c = c1;
                    k++;
                    break;
                }
            }
        }
    }
    cout<<4*a+4*b+4*c<<endl;
    return 0;
}
