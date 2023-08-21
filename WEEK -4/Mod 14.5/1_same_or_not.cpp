#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>st1;
    stack<int>st2;

    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        st1.push(x);
    }

    int m;cin>>m;
    for(int i = 0;i<m; i++)
    {
        int k ; cin>>k;
        st2.push(k);
    }


    if(n != m) 
    {
        cout<<"NO"<<endl; 
    }

    else 
    {
        bool flag = true;
        while(!st1.empty())
        {
            
            int a,b;
            a = st1.top();
            b = st2.top();
            if(a != b)
            {
                flag = false;
            }
            st1.pop();
            st2.pop();
        }

        // cout<<flag <<endl;
        if(flag == false)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}