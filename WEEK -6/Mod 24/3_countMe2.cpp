#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        map<int, int> mp;
        int mx_cnt = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            if (mp[x] > mx_cnt)
                mx_cnt = mp[x];
        }

        // cout<<mx_cnt<<endl;

        stack<pair<int, int>> st;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second == mx_cnt)
                st.push({it->first, it->second});
        }

        pair<int, int> myPair = st.top();
        cout << myPair.first << " " << myPair.second << endl;
    }
    return 0;
}