// magic color solve korar jonno string er pashapapshi 2 ta character same hoile remove korbo.

/*
    P P P Y P Y C C C --> PYPYC


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "BBB";

    queue<char> q;
    for (char c : s)
    {
        q.push(c);
    }

    queue<char> q2;

    char ch = q.front();
    q.pop();

    int flag = 0;
    while (!q.empty())
    {
        if (q.front() == ch)
        {
            q.pop();
            if (q.empty())
            {
                flag = 1;
                break;
            }
        }
        else if (q.front() != ch)
        {
            q2.push(ch);
            q2.push(q.front());
            q.pop();
            if (q.empty())
            {
                flag = 1;
                break;
            }

        }

        ch = q.front();
        q.pop();
    }
    // cout<<ch<<endl;
    if (flag == 0)
    {
        q2.push(ch);
    }

    while (!q2.empty())
    {
        cout << q2.front();
        q2.pop();
    }
    cout << endl;

    return 0;
}
