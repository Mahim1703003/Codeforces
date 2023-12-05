#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("input.txt");
    fout.open("output.txt");
    int n,k,sum=0,m,i;
    //cin>>n>>k;
    fin>>n>>k;
    for(i=1;i<=n;i++)
    {
        fin>>m;
        if(3*k<m)
            sum = sum + (m-3*k);
        else
            sum = sum + (m%k);
    }
    //cout<<sum<<endl;
    fout<<sum<<endl;
    fin.close();
    fout.close();
    return 0;
}
