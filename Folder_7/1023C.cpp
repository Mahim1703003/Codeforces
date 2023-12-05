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
    stack <char> st,temp;
    int n,k,l,i,ct=0;
    char ch;
    cin>>n>>k>>s;
    l = n - k;
    for(i=0;i<=n-1;i++)
    {
        if(ct<l)
        {
            if(s[i]=='(')
                st.push(s[i]);
            else
            {
                st.pop();
                ct = ct + 2;
            }
        }
        else
            st.push(s[i]);
    }
    while(!st.empty())
    {
        ch = st.top();
        st.pop();
        temp.push(ch);
    }
    while(!temp.empty())
    {
        cout<<temp.top();
        temp.pop();
    }
    return 0;
}
