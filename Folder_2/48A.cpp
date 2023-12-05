#include<iostream>
#include<string>
using namespace std;
int main()
{
    int rock=0,paper=0,scissors=0;
    string sf,sm,ss;

    cin>>sf;
    if(sf=="rock")
        rock++;
    else if(sf=="paper")
        paper++;
    else
        scissors++;

    cin>>sm;
    if(sm=="rock")
        rock++;
    else if(sm=="paper")
        paper++;
    else
        scissors++;

    cin>>ss;
    if(ss=="rock")
        rock++;
    else if(ss=="paper")
        paper++;
    else
        scissors++;

    if(rock==1 && scissors==2)
    {
        if(sf=="rock")
            cout<<"F\n";
        else if(sm=="rock")
            cout<<"M\n";
        else
            cout<<"S\n";
    }
    else if(scissors==1 && paper==2)
    {
        if(sf=="scissors")
            cout<<"F\n";
        else if(sm=="scissors")
            cout<<"M\n";
        else
            cout<<"S\n";
    }
    else if(paper==1 && rock==2)
    {
        if(sf=="paper")
            cout<<"F\n";
        else if(sm=="paper")
            cout<<"M\n";
        else
            cout<<"S\n";
    }
    else
        cout<<"?\n";
    return 0;
}
