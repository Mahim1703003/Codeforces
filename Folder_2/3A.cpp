#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    char ch1,ch2;
    int p1,p2,dif1,dif2,a,b,i;
    cin>>ch1>>p1>>ch2>>p2;
    if(p2>p1&&ch2>ch1)
    {
        a=p2-p1;
        b=ch2-ch1;
        if(a>b)
        {
            cout<<b+(a-b)<<endl;
            for(i=1;i<=b;i++)
                cout<<"RU\n";
            for(i=1;i<=(a-b);i++)
                cout<<"U\n";
        }
        else if(b>a)
        {
            cout<<a+(b-a)<<endl;
            for(i=1;i<=a;i++)
                cout<<"RU\n";
            for(i=1;i<=(b-a);i++)
                cout<<"R\n";
        }
        else
        {
            cout<<a<<endl;
            for(i=1;i<=a;i++)
                cout<<"RU\n";
        }
    }
    else if(p2>p1&&ch2<ch1)
    {
        a=p2-p1;
        b=ch1-ch2;
        if(a>b)
        {
            cout<<b+(a-b)<<endl;
            for(i=1;i<=b;i++)
                cout<<"LU\n";
            for(i=1;i<=(a-b);i++)
                cout<<"U\n";
        }
        else if(b>a)
        {
            cout<<a+(b-a)<<endl;
            for(i=1;i<=a;i++)
                cout<<"LU\n";
            for(i=1;i<=(b-a);i++)
                cout<<"L\n";
        }
        else
        {
            cout<<a<<endl;
            for(i=1;i<=a;i++)
                cout<<"LU\n";
        }
    }
    else if(p1>p2&&ch1>ch2)
    {
        a=p1-p2;
        b=ch1-ch2;
        if(a>b)
        {
            cout<<b+(a-b)<<endl;
            for(i=1;i<=b;i++)
                cout<<"LD\n";
            for(i=1;i<=(a-b);i++)
                cout<<"D\n";
        }
        else if(b>a)
        {
            cout<<a+(b-a)<<endl;
            for(i=1;i<=a;i++)
                cout<<"LD\n";
            for(i=1;i<=(b-a);i++)
                cout<<"L\n";
        }
        else
        {
            cout<<a<<endl;
            for(i=1;i<=a;i++)
                cout<<"LD\n";
        }
    }
    else if(p1>p2&&ch2>ch1)
    {
        a=p1-p2;
        b=ch2-ch1;
        if(a>b)
        {
            cout<<b+(a-b)<<endl;
            for(i=1;i<=b;i++)
                cout<<"RD\n";
            for(i=1;i<=(a-b);i++)
                cout<<"D\n";
        }
        else if(b>a)
        {
            cout<<a+(b-a)<<endl;
            for(i=1;i<=a;i++)
                cout<<"RD\n";
            for(i=1;i<=(b-a);i++)
                cout<<"R\n";
        }
        else
        {
            cout<<a<<endl;
            for(i=1;i<=a;i++)
                cout<<"RD\n";
        }
    }
    else if(p1==p2&&ch1<ch2)
    {
        a=ch2-ch1;
        cout<<a<<endl;
        for(i=1;i<=a;i++)
            cout<<"R\n";
    }
    else if(p1==p2&&ch2<ch1)
    {
        a=ch1-ch2;
        cout<<a<<endl;
        for(i=1;i<=a;i++)
            cout<<"L\n";
    }
    else if(p2>p1&&ch1==ch2)
    {
        a=p2-p1;
        cout<<a<<endl;
        for(i=1;i<=a;i++)
            cout<<"U\n";
    }
    else if(p1>p2&&ch1==ch2)
    {
        a=p1-p2;
        cout<<a<<endl;
        for(i=1;i<=a;i++)
            cout<<"D\n";
    }
    else if(p1==p2&&ch1==ch2)
        cout<<"0\n";
    return 0;
}
