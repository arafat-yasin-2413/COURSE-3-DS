#include<bits/stdc++.h>
using namespace std;

int main()
{
    // priority_queue<int> pq;
    priority_queue<int , vector<int> , greater<int> > pq;
    while(true)
    {
        int c ; cin>> c;
        if(c == 0)
        {
            //insert 
            int x;
            cin>> x;
            pq.push(x); // O(log N)
        }

        else if( c == 1)
        {
            pq.pop(); // O(log N)
        }

        else if(c == 2)
        {
            cout<<pq.top()<<endl; // O(1);
        }

        else 
            break;
    }

    return 0;
}