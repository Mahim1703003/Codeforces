#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <char,int> m;
    string s;
    int t,i,zero=0,limit,limit1,limit2;
    cin>>t;
    while(t--)
    {
        cin>>s;
        for(i=0;i<=s.size()-1;i++)
            m[s[i]]++;
        if(m['L']==0)
            zero++;
        if(m['R']==0)
            zero++;
        if(m['U']==0)
            zero++;
        if(m['D']==0)
            zero++;
        limit1 = min(m['L'],m['R']);
        limit2 = min(m['U'],m['D']);
        if(limit1!=0&&limit2!=0){
        cout<<limit1*2+limit2*2<<"\n";
        for(i=1;i<=limit2/2;i++)
            cout<<"U";
        for(i=1;i<=limit1;i++)
            cout<<"R";
        for(i=1;i<=limit2;i++)
            cout<<"D";
        for(i=1;i<=limit1;i++)
            cout<<"L";
        for(i=1;i<=limit2-limit2/2;i++)
            cout<<"U";
        cout<<"\n";
        }
        else if(limit1!=0&&limit2==0)
            cout<<"2\nLR\n";
        else if(limit1==0&&limit2!=0)
            cout<<"2\nUD\n";
        else
            cout<<"0\n";
        /*if(zero==0)
        {
            if((limit1>=2&&limit2>=2)||(limit1==1&&limit2==1))
            {
                limit = min(limit1,limit2);
                cout<<limit*4<<"\n";
                for(i=1;i<=limit;i++)
                    cout<<"U";
                for(i=1;i<=limit;i++)
                    cout<<"R";
                for(i=1;i<=limit;i++)
                    cout<<"D";
                for(i=1;i<=limit;i++)
                    cout<<"L";
                cout<<"\n";
            }
            else if(limit1>=2&&limit2==1)
            {
                limit1 = 2;
                cout<<limit1*2+limit2*2<<"\n";
                cout<<"LRRLUD\n";
            }
            else if(limit1==1&&limit2>=2)
            {
                limit2 = 2;
                cout<<limit1*2+limit2*2<<"\n";
                cout<<"UDDULF\n";
            }
        }
        else if(zero==1)
        {
            if(limit1!=0)
            {
                if(limit1>=2)
                    cout<<"4\nLRRL\n";
                else
                    cout<<"2\nLR\n";
            }
            else
            {
                if(limit2>=2)
                    cout<<"4\nUDDU\n";
                else
                    cout<<"2\nUD\n";
            }
        }
        else if(zero==2)
        {
            if(limit1!=0)
            {
                if(limit1>=2)
                    cout<<"4\nLRRL\n";
                else
                    cout<<"2\nLR\n";
            }
            else if(limit2!=0)
            {
                if(limit2>=2)
                    cout<<"4\nUDDU\n";
                else
                    cout<<"2\nUD\n";
            }
            else
                cout<<"0\n";
        }
        else if(zero==3)
            cout<<"0\n";*/
        m.clear();
        zero = 0;
    }
    return 0;
}
