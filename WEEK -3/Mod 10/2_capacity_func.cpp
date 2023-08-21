#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>myList={10,20,30,40};
    // cout<<myList.size()<<endl;
    // cout<<myList.max_size()<<endl;

    // for(int val:myList)
    // {
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    // myList.clear();

    myList.resize(2);
    //myList.resize(5);
    myList.resize(5,100);
    cout<<myList.size()<<endl;
    for(int val:myList)
    {
        cout<<val<<" ";
    }

    return 0; 
}