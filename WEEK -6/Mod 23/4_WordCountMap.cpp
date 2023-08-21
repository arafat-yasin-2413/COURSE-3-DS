#include<bits/stdc++.h>
using namespace std;

int main()
{
    string sent;
    getline(cin,sent);

    string word;
    stringstream ss(sent);

    map <string,int> mp;

    while(ss >> word)
    {
        mp[word]++;

        // cout<<word<<endl;
    }

    // for(auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout<<it-> first<<" " << it-> second<<endl;
    // }


    cout<<mp["my"] <<endl;

    return 0;
}