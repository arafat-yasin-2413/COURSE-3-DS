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