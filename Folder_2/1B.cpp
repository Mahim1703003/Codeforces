#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
int main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    string s = "mahim";
    if(s[7]=='\0')
        cout<<"hi";
    int n,z,l,ct=0;
    string str;
    cin>>n;
    for(z=1;z<=n;z++)
    {
        fflush(stdin);
        cin>>str;
        for(l=0;l<=str.length()-1;l++)
        {
            if(str[l]=='R'&&(str[l+1]>='1'&&str[l+1]<='9'))
                ct++;
            if(str[l]=='C'&&(str[l+1]>='1'&&str[l+1]<='9'))
                ct++;
        }
        if(ct==2)
        {
            int g,h=0,b=0,remainder,div;
            vector <int> v;
            for(l=1;str[l]!='C';l++)
            {
                g=str[l]-'0';
                h=h*10+g;
            }
            for(l=l+1;l<=str.length()-1;l++)
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
                    v.push_back(remainder);
                    b=b/26;
                    b--;
                }
                else{
                v.push_back(remainder);
                b=b/26;
                }
            }
            reverse(v.begin(),v.end());
            for(l=0;l<=v.size()-1;l++)
                printf("%c",64+v[l]);
            cout<<h<<endl;
        }
        else
        {
            vector <char> ch;
            double k=0;
            double a=0,b;
            for(l=str.length()-1;l>=0;l--)
            {
                if(str[l]>='A'&&str[l]<='Z')
                {
                    b=str[l]-'A'+1;
                    a=a+pow(26,k)*b;
                    k++;
                }
                else
                {
                    ch.push_back(str[l]);
                }
            }
            reverse(ch.begin(),ch.end());
            cout<<"R";
            for(l=0;l<=ch.size()-1;l++)
                cout<<ch[l];
            cout<<"C"<<a<<endl;
        }
        ct=0;
    }
    return 0;
}


