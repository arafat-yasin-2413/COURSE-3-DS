#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(26,0);
    
    char ch;
    while(cin>>ch)
    {
        v[ch-'a']++;
    }

    for(int i = 0; i<26; i++)
    {
        if(v[i] > 0) 
        {
            cout<< char(i+'a') <<" : "<< v[i]<<endl;
        }
    }
    

    
    



    
    

    


    return 0; 
}