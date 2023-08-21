#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> L;

    int n;cin>>n;
    for(int i = 0;  i<n; i++)
    {
        int x; 
        cin>>x ;

        L.push(x); 
    }


    while(!L.empty())
    {
        cout<<L.front()<<endl; 
        L.pop();
    }

    return 0;
}