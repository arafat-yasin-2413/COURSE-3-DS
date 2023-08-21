#include<bits/stdc++.h>
using namespace std;

int main()
{
    // assigning 
    // vector <int> x ={10,20,30}; 
    // vector <int> v ={1,2,3};
    // v = x; // O(1)

    // for(int val: v)
    //     cout<<val<<" ";
    //     cout<<endl;

    // vector <int> a={11,22,33,44,55};
    // vector <int> b = {4,5,6};
    // b = a; //O(N)
    // for(int elm : b )
    //     cout<<elm<<" ";
    //     cout<<endl;

    // vector <int> c={55,66,77};
    // c.pop_back();

    // for(int value:c)
    //     cout<<value<<" ";
    //     cout<<endl;



    // insert 
    // vector <int> v ={1,2,3,4};
    // v.insert(v.begin()+2,55);
    // vector<int> d ={5,6,7,8};
    // v.insert(v.begin()+1,d.begin(),d.end());
    
    // for(int x: v)
    //     cout<<x<<" ";
    //     cout<<endl;

    // erase
    
    vector <int> d={10,20,30,40,50,60,70};
    d.erase(d.begin()+1,d.end()-2);
    for(int value:d)
        cout<<value<<" ";
        cout<<endl;

    vector <int> e={6,7,8,9};
    e.erase(e.begin()+2);
    for(int vl : e)
        cout<<vl<<" ";
        cout<<endl;










    return 0; 
}