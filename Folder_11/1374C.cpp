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
    int t,n,len,i;
    cin>>t;
    while(t--)
    {
        stack <char> st;
        cin>>n>>s;
        for(i=0;i<=n-1;i++)
        {
            if(st.empty())
                st.push(s[i]);
            else
            {
                ch = st.top();
                if(ch=='('&&s[i]==')')
                    st.pop();
                else
                    st.push(s[i]);
            }
        }
        len = st.size();
        cout<<len/2<<"\n";
    }
    return 0;
}
