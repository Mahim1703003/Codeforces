#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    char ch;
    int t,i,k=0;
    cin>>t;
    while(t--)
    {
        cin>>s;
        stack <char> st;
        for(i=0;i<=s.size()-1;i++)
        {
            if(st.empty())
                st.push(s[i]);
            else
            {
                ch = st.top();
                if(ch!=s[i])
                {
                    st.pop();
                    k++;
                }
                else
                    st.push(s[i]);
            }
        }
        if(k%2==1)
            cout<<"DA\n";
        else
            cout<<"NET\n";
        k = 0;
    }
}
