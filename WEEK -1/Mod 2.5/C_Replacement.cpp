#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    for(auto it=v.begin(); it<v.end(); it++)
    {
        int x = *it;
        if(x > 0 )
            *it = 1;
        else if(x<0)
            *it=2;
    }

    for(int val:v)
        cout<<val<<" ";
        cout<<endl;

    return 0; 
}