#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    string str;

    int t; 
    cin>>t;
    while(t--)
    {
        int cmd;
        cin>>cmd;
        if(cmd == 0)
        {
            cin>>str;
            q.push(str);
        }

        else 
        {
            if(q.empty())
            {
                cout<<"Invalid"<<endl;
            }
            else 
            {
                cout<<q.front()<<endl;
                q.pop();
            }
        }
    }

    return 0;
}