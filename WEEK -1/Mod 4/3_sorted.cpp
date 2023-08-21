// https://prnt.sc/GzcE37RvPcNa

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {

        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool isSorted = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] < a[i])
            {
                isSorted = false;
                break;
            }
        }

        if (isSorted == true)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
    return 0;
}