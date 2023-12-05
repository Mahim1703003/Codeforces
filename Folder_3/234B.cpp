#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<fstream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ifstream myfile_intput;
    myfile_intput.open("input.txt");
    ofstream myfile_output;
    myfile_output.open("output.txt");
    vector < pair <int,int> > v;
    int n,k,i,x;
    myfile_intput>>n>>k;
    for(i=1;i<=n;i++)
    {
        myfile_intput>>x;
        v.push_back(make_pair(x,i));
    }
    sort(v.begin(),v.end());
    myfile_output<<v[n-k].first<<"\n";
    for(i=n-k;i<=n-1;i++)
        myfile_output<<v[i].second<<" ";
    myfile_output<<"\n";
    return 0;
}
