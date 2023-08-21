#include <bits/stdc++.h>
using namespace std;

class myStack
{
    public:
        vector<int>v;

        void push(int val)
        {
            v.push_back(val);
        }

        void pop()
        {
            v.pop_back();
        }

        int Top()
        {
            return v.back();
        }

        int size()
        {
            return v.size();
        }

        bool empty()
        {
            if(v.size() == 0)
            {
                return true;
            }

            else return false;
        }

};

int main()
{
    myStack st;

    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    
    // cout<<st.empty()<<endl;
    

    int n;cin>>n;
    while(n--)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    while(st.empty() != true)
    {
        cout<<st.Top()<<endl;
        st.pop();
    }

    return 0;
}