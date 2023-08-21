// https://prnt.sc/j-w5ffDIZu7A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    long long int pref_sum[n];
    pref_sum[0] = a[0];
    for(int i= 1;i<n;i++)
        pref_sum [i] = pref_sum[i-1]+a[i];

    for(int i =n-1;i>=0; i--)   
        cout<<pref_sum[i]<<" "; 

    return 0; 
}