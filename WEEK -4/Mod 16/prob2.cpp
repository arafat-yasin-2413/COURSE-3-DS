#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m;
    stack<int>st;
    queue<int>q;

    cin>>n>>m;
    for(int i = 0; i<n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    
    for(int j = 0;  j<m; j++)
    {
        int y ;
        cin>>y;
        q.push(y);
    }

  

    list<int> L1;
    list<int> L2; 

    while(!st.empty())
    {
        L1.push_back(st.top());
        st.pop();
    }



    
    while(!q.empty())
    {
        L2.push_back(q.front());
        q.pop();
    }

 
    bool flag = true;
    if(n!=m)
    {
        cout<<"NO"<<endl;
    }
    else 
    {
        while(!L1.empty())
        {
            int a = L1.front();
            int b = L2.front();
            if(a!=b) flag = false;

            L1.pop_front();
            L2.pop_front();
        }

        if(flag == true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    

    return 0;
}