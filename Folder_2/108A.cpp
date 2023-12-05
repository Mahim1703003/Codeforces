#include<iostream>
using namespace std;
int rev(int n);
int main()
{
    int a,b,c;
    char ch;
    cin>>a>>ch>>b;
    c=rev(a);
    if(c>b)
    {
        if((a>=10&&a<=23)&&(c>=10&&c<=59))
            cout<<a<<ch<<c<<endl;
        else if((a>=0&&a<=9)&&(c>=0&&c<=5))
            cout<<"0"<<a<<ch<<c<<"0"<<endl;
        else if((a>=0&&a<=9))
            cout<<"0"<<a<<ch<<c<<endl;
        else if((c>=0&&c<=5))
            cout<<a<<ch<<c<<"0"<<endl;
        else if(c==61||c==71||c==81||c==91)
            cout<<"20:02\n";
        else if(c==6||c==7||c==8||c==9)
            cout<<"10:01\n";
    }
    else
    {
        a++;
        if(a==24)
            cout<<"00:00\n";
        else{
        c=rev(a);
        if((a>=10&&a<=23)&&(c>=10&&c<=59))
            cout<<a<<ch<<c<<endl;
        else if((a>=0&&a<=9)&&(c>=0&&c<=5))
            cout<<"0"<<a<<ch<<c<<"0"<<endl;
        else if((c>=0&&c<=5))
            cout<<a<<ch<<c<<"0"<<endl;
        else if(c==61||c==71||c==81||c==91)
            cout<<"20:02\n";
        else if(c==6||c==7||c==8||c==9)
            cout<<"10:01\n";
        else if((a>=0&&a<=9))
            cout<<"0"<<a<<ch<<c<<endl;
        }
    }
    return 0;
}

int rev(int n)
{
    int remainder,rev_number=0;
    while(n>0)
    {
        remainder=n%10;
        rev_number=10*rev_number+remainder;
        n=n/10;
    }
    return rev_number;
}
