#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp; 

    mp["Asif"] = 45; // logN
    mp["Abdullah"] = 65;
    mp.insert(make_pair("Sakib Al Hasan",75));
    mp.insert(make_pair("Tamim Iqbal",19));
    mp.insert({"Rahat",100});
    mp.insert({"Akib",0});
    mp.insert({"Akib",100});

    mp.insert(make_pair("Shamim",79));

    // for(auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout<< it -> first <<" "<< it -> second <<endl;
    //     //  logN
    // }


    // cout<<mp["Rahat"] <<endl;

    
    // if(mp.count("Akib")) 
    // {
    //     cout<<"Ache" <<endl;    
    // }
    // else 
    // {
    //     cout<<"Nai"<<endl;
    // }


    cout<<mp.count("Akib")<< endl;  
    // 23-7 video er 12:30 theke dekho

    return 0;
}