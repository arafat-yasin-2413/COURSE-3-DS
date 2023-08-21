#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        set<int> s;
        int n;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        stack<int> st;
        for (auto it = s.begin(); it != s.end(); it++)
        {
            // cout<<*it<<endl;
            st.push(*it);
        }

        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout<<endl;
    }
    return 0;
}