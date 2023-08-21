#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int cnt=0;
    for(auto it=v.begin();it<v.end();it++)
    {
        for(auto it2=v.begin(); it2<v.end();it2++)
        {
            int x = *it;
            int y = *it2;

            if(it == it2)
                continue;
            
            if(x+1 == y)
            {
                cnt++;
                break;
            }

        }
    }

    cout<<cnt<<endl;

    return 0; 
}