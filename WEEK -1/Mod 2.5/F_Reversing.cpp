#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i =0;i<n;i++)
        cin>>v[i];

    for(auto it=v.end()-1;it>v.begin()-1; it--)
        cout<<*it<<" ";
    cout<<endl;

    return 0; 
}