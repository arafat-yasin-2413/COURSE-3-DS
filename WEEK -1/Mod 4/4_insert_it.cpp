#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n; 
    int ar[n]; 

    for(int i= 0;i<n;i++)
    {
        cin >> ar[i];
    }

    int m ; 
    cin >> m;
    int b[m];
    for(int i = 0;i<m; i++)
    {
        cin>>b[i]; 
    } 

    int x; 
    cin >> x; 

    int c[m+n];
    int i = 0; 
    for(i = 0; i<x; i++)
    {
        c[i] = ar[i];
    }

    // cout<<i<<endl;
    for(int j = 0; j<m; j++)
    {
        c[i] = b[j];
        i++;
    }

    // cout<<i<<endl;
    for(int j = i ; j<(m+n); j++)
    {
        c[j] = ar[x];
        x++;
    }

    for(int i = 0; i<m+n; i++)
    {
        cout<<c[i]<<" "; 
    }
    

    return 0;
}



























/*
// https://prnt.sc/exWK_NVd_FQU

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;

    vector<int>v(a);
    for(int i =0;i<a;i++) 
        cin>>v[i];

    int b;
    cin>>b;
    vector<int>v2(b);
    for(int i=0;i<b;i++)
        cin>>v2[i];

    int x;
    cin>>x;

    v.insert(v.begin()+x,v2.begin(),v2.end());

    for(int val:v)
        cout<<val<<" ";

    return 0; 
}
*/