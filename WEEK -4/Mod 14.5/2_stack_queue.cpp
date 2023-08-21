#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>st;
    queue<int>q;

    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        st.push(x);
    }

    int m;cin>>m;
    for(int i = 0;i<m; i++)
    {
        int k ; cin>>k;
        q.push(k);
    }


    if(n != m) 
    {
        cout<<"NO"<<endl; 
    }

    else 
    {
        bool flag = true;
        while(!st.empty())
        {
            
            int a,b;
            a = st.top();
            b = q.front();
            if(a != b)
            {
                flag = false;
            }
            st.pop();
            q.pop();
        }

        // cout<<flag <<endl;
        if(flag == false)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}