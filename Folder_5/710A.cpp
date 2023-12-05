#include<iostream>
using namespace std;
int main()
{
    char c;
    int r;
    cin>>c>>r;
    if((c=='a'&&r==1)||(c=='a'&&r==8)||(c=='h'&&r==1)||(c=='h'&&r==8))
        cout<<"3\n";
    else if((c=='a'&&(r>=2&&r<=7))||(c=='h'&&(r>=2&&r<=7))||((c>='b'&&c<='g')&&r==1)||((c>='b'&&c<='g')&&r==8))
        cout<<"5\n";
    else
        cout<<"8\n";
    return 0;
}
