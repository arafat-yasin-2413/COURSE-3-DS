#include <bits/stdc++.h>
using namespace std;

/*
10
6
RGGRRG
6
RGRGRG
4
RGGR
5
RGGGR
4
RGGB
18
RBRBRBGRBRRGBGGBGB
18
RBGRGBBRGBGRGRBGBR
6
RRBBGG
6
RBGBGR
3
BBB
*/
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        stack<char> st;
        string s;

        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;

            if (st.empty())
            {
                st.push(ch);
            }

            else if (!st.empty())
            {
                if (st.top() == ch)
                {
                    st.pop();
                }

                else if (st.top() != ch)
                {
                    if ((st.top() == 'R' and ch == 'B') or (st.top() == 'B' and ch == 'R'))
                    {
                        st.pop();
                        st.push('P');
                    }

                    else if ((st.top() == 'R' and ch == 'G') or (st.top() == 'G' and ch == 'R'))
                    {
                        st.pop();
                        st.push('Y');
                    }

                    else if ((st.top() == 'B' and ch == 'G') or (st.top() == 'G' and ch == 'B'))
                    {
                        st.pop();
                        st.push('C');
                    }

                    else
                    {
                        st.push(ch);
                    }
                }
            }
        }

        string str2 = "";
        stack<char> st2;

        while (!st.empty())
        {
            st2.push(st.top());
            st.pop();
        }

        while (!st2.empty())
        {
            str2 += st2.top();
            st2.pop();
        }

        // cout<<str2<<endl;

        stack<char> st3;
        for (char ch3 : str2)
        {
            if (st3.empty())
            {
                st3.push(ch3);
            }

            else if (!st3.empty())
            {
                if (ch3 != st3.top())
                {
                    st3.push(ch3);
                }

                else
                {
                    st3.pop();
                }
            }
        }

        stack<char> st4;
        while (!st3.empty())
        {
            // cout<<st3.top();
            st4.push(st3.top());
            st3.pop();
        }

        while (!st4.empty())
        {
            cout << st4.top();
            st4.pop();
        }

        cout << endl;
    }

    return 0;
}