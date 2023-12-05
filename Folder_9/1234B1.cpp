#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    list <int> l;
    list <int>::iterator it;
    int n,k,x,i;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        it = find(l.begin(),l.end(),x);
        if(it==l.end())
        {
            l.push_front(x);
            if(l.size()>k)
                l.pop_back();
        }
    }
    cout<<l.size()<<endl;
    for(it=l.begin();it!=l.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
    /* this part is just for revision of list
    list <int> l;
    list <int>::iterator it;

    l.push_back(2);
    l.push_back(3);
    l.push_front(5);

    for(it=l.begin();it!=l.end();it++)
        cout<<*it<<" ";
    cout<<endl<<l.size()<<endl;

    l.pop_front();

    for(it=l.begin();it!=l.end();it++)
        cout<<*it<<" ";
    cout<<endl<<l.size()<<endl;

    int m;
    cin>>m;
    it = find(l.begin(),l.end(),m);
    if(it==l.end())
        cout<<"Not in the list\n";
    else
        cout<<"In the list\n";
    return 0;*/
}
