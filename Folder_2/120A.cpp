#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ifstream fin;
    fin.open("input.txt");
    ofstream fout;
    fout.open("output.txt");
    string s;
    int a;
    fin>>s>>a;
    if(s=="front")
    {
        if(a==1)
            fout<<"L\n";
        else
            fout<<"R\n";
    }
    else
    {
        if(a==1)
            fout<<"R\n";
        else
            fout<<"L\n";
    }
    return 0;
}
