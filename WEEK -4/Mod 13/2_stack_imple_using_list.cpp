#include<bits/stdc++.h>
using namespace std;

class myStack
{
    public:
        list<int>L;

        void push(int val)
        {
            L.push_back(val);
        } 

        void pop()
        {
            L.pop_back();
        }

        int Top()
        {
            return L.back();
        }

        int size()
        {
            return L.size();
        }

        bool empty()
        {
            if(L.size() == 0)
            {
                return true;
            }

            else return false; 
        }
};

int main()
{
    myStack st;

    int n;
    cin>>n;
    while(n--)
    {
        int x;cin>>x;
        st.push(x);
    }


    while(!st.empty())
    {
        cout<<st.Top()<<endl;
        st.pop(); 
    }
    

    return 0;
}