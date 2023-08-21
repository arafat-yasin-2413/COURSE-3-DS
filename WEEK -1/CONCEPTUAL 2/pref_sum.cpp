// Abdullah Al Naim Vaiya's code


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    vector<int> pre(n); // amader jadur box
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // prefix sum calculation
    pre[0] = v[0];
    for (int i = 1; i < n; i++){
        pre[i] = v[i] + pre[i - 1];
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        l--; // 1 base index chilo tai ek komiye 0 base index korchi
        r--; // 1 base index chilo tai ek komiye 0 base index korchi
        if(l == 0){
            cout << pre[r] << endl;
        }
        else{
            cout << pre[r] - pre[l - 1] << endl;
        }
    }
    // 1 3 -- 1 base index
    // 0 2 -- 0 base index
    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += v[i];
    //     pre[i] = sum;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << pre[i] << " ";
    // }
    return 0;
}
