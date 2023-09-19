#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q; 
    cin >> n >> q; 
    long long int ar[n]; 
    for(int i = 0; i<n; i++)
    {
        cin >> ar[i]; 
    }

    long long int prefSum[n];
    prefSum[0] = ar[0];
    for(int i = 1; i<n; i++)
    {
        prefSum[i] = prefSum[i-1]+ar[i];
    }

    // for(int i = 0; i<n; i++)
    // {
    //     cout<<prefSum[i]<<" "; 
    // }

    while(q--)
    {
        int L,R;
        cin >> L >> R; 

        L--; 
        R--; 
        if(L == 0) 
        {
            cout<<prefSum[R]<<endl;
        }
        else 
        {
            cout<<prefSum[R] - prefSum[L-1]<<endl;
        }
    }

    return 0;
}