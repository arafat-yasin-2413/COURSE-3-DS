#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    cin.ignore();
    // getchar();
    while (n--)
    {
        string st;
        getline(cin,st);
        // cout<<st<<endl;

        map<string,int> mp;

        string word;
        stringstream ss(st);
        int mx_cnt = INT_MIN;
        queue< pair<int,string> > q;
        while(ss>>word)
        {
            mp[word]++;
            q.push({mp[word],word});
            if(mp[word] > mx_cnt) mx_cnt = mp[word];
        }

        // cout<<mx_cnt<<endl;

        // for(auto it = mp.begin(); it!= mp.end(); it++)
        // {
        //     cout<<it->first <<" "<<it->second <<endl;
        // }
        // cout<<endl; 


        while(!q.empty())
        {
            // cout<<q.front().first <<" = "<<q.front().second<<endl;
            // q.pop();
            pair< int,string > myPair = q.front();
            q.pop();
            if(myPair.first == mx_cnt) 
            {
                cout<<myPair.second<<" " <<myPair.first<<endl;
                break;
            } 
        }
        // cout<<endl;

    }
    
    
   

    return 0;
}














































