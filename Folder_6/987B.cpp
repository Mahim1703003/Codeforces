#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x,y;
    cin>>x>>y;
    if((x==2&&y==3)||((x==3&&y==2)))
    {
        if(x<y)
            cout<<"<\n";
        else
            cout<<">\n";
    }
    else if(x==y||(x==2&&y==4)||(x==4&&y==2))
        cout<<"=\n";
    else
    {
        if(x<y)
        {
            if(x!=1)
                cout<<">\n";
            else
                cout<<"<\n";
        }
        else
        {
            if(y!=1)
                cout<<"<\n";
            else
                cout<<">\n";
        }
    }
    return 0;
}
