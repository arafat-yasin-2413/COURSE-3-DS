#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v={50,40,45,30,35,42,32,25,20,10};

    vector<int>v;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_idx = v.size() - 1;

        // ekhon dekhte hobe :
        // 1. parent soman hoile osubidha nai.
        // 2. parent choto hoilei swap
        while (cur_idx != 0)
        {
            int parent = (cur_idx - 1) / 2;
            if (v[parent] < v[cur_idx])
            {
                swap(v[parent], v[cur_idx]);
            }
            else
                break;

            //  break korlam karon, parent jodi boro thake tahole r niche
            // jawar dorkar nai
            cur_idx = parent;
        }
    }

    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}