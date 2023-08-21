#include<bits/stdc++.h>
using namespace std;

int main()
{
    set <int> s;
    int n;
    cin>> n;
    while (n--)
    {
        int x; cin>>x; 
        s.insert(x);  // logN
    }


    // for(auto it = s.begin (); it != s.end(); it++)
    // {
    //     // cout<<*it<<endl;
    //     int val = *it;
    //     cout<<val<<endl;


    // }


    // if(s.count(3)) cout<<"Yes"<<endl; 
    // else cout<<"No"<< endl;

    cout<<s.count(3)<<endl; // logN
    

    return 0;
}