#include<bits/stdc++.h>
using namespace std;



class myQueue 
{
    public:
    list<int> L;

    void push(int val)
    {
       L.push_back(val);
    }


    void pop()
    {
        L.pop_front();
    }

    int front()
    {
        return L.front();
    }
    int size()
    {
        return L.size();
    }

    bool empty()
    {
        return L.empty();
        // if(L.size() == 0)
        // {
        //     return true;
        // }

        // else 
        //     return false; 
    }


};

int main()
{
    myQueue q;
    int n; cin>>n; 
    while(n--)
    {
        int x ; 
        cin>> x; 
        q.push(x); 

    }

    while(!q.empty())
    {
        cout<<q.front()<<endl; 
        q.pop(); 
    }
    

    return 0;
}