#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i =0;i<n;i++)
        cin>>a[i];

    long long int prf_sum[n];
    prf_sum[0] = a[0];
    for(int i =1; i<n;i++)
        prf_sum[i] = prf_sum[i-1]+a[i];

    // for(int i =0;i<n;i++)
    //     cout<<prf_sum[i]<<" ";
    //     cout<<endl;

    
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;

        if(l == 0)
        {   
            cout<<prf_sum[r]<<endl;
        }

        else 
        {
            cout<<prf_sum[r]-prf_sum[l-1]<<endl;

        }
    }

    return 0; 
}