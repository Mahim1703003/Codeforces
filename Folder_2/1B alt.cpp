#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int n,z,l,ct=0;
    char str[100000];
    cin>>n;
    for(z=1;z<=n;z++)
    {
        //fflush(stdin);
        cin>>str;
        for(l=0;l<=str[l]!='\0';l++)
        {
            if(str[l]=='R'&&(str[l+1]>='1'&&str[l+1]<='9'))
                ct++;
            if(str[l]=='C'&&(str[l+1]>='1'&&str[l+1]<='9'))
                ct++;
        }
        if(ct==2)
        {
            int g,h=0,b=0,remainder,div;
            int v[100000],m=0;
            for(l=1;str[l]!='C';l++)
            {
                g=str[l]-'0';
                h=h*10+g;
            }
            for(l=l+1;str[l]!='\0';l++)
            {
                g=str[l]-'0';
                b=b*10+g;
            }
            while(b)
            {
                remainder=b%26;
                if(remainder==0)
                {
                    remainder=26;
                    v[m]=remainder;
                    b=b/26;
                    b--;
                    m++;
                }
                else{
                v[m]=remainder;
                b=b/26;
                m++;
                }
            }
            reverse(v,v+m);
            for(l=0;l<=m-1;l++)
                printf("%c",64+v[l]);
            cout<<h<<endl;
        }
        else
        {
            char ch1[1000000];
            int m=0;
            int u;
            double k=0,a=0,b;
            int gh;
            u=strlen(str);
            for(l=u-1;l>=0;l--)
            {
                if(str[l]>='A'&&str[l]<='Z')
                {
                    b=str[l]-'A'+1;
                    a=a+pow(26,k)*b;
                    k++;
                }
                else
                {
                    ch1[m]=str[l];
                    m++;
                }
            }
            reverse(ch1,ch1+m);
            cout<<"R";
            for(l=0;l<=m-1;l++)
                cout<<ch1[l];
            gh=a;
            cout<<"C"<<gh<<endl;
        }
        ct=0;
    }
    return 0;
}
