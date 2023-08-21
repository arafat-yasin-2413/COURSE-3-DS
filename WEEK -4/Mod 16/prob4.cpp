#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        stack<char> st;
        for (char c : str)
        {
            if (c == 'A')
            {
                if (!st.empty())
                {
                    if (st.top() == c)
                    {
                        st.push(c);
                    }
                    else
                    {
                        st.pop();
                    }
                }

                else
                {
                    // stack khali
                    st.push(c);
                }
            }

            if (c == 'B')
            {
                if (!st.empty())
                {
                    if (st.top() == c)
                    {
                        st.push(c);
                    }
                    else
                    {
                        st.pop();
                    }
                }

                else
                {
                    // stack khali
                    st.push(c);
                }
            }
        }

        // while(!st.empty())
        // {
        //     cout<<st.top()<<" ";
        //     st.pop();
        // }
        if (st.empty())
        {
            cout << "YES" << endl;
        }

        else
            cout << "NO" << endl;
    }

    return 0;
}