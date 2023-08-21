#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};


class Basic_Operation
{
    public:
    Node *head ;
    Node *tail ;

    Basic_Operation()
    {
        head = NULL;
        tail = NULL; 
    }


    void insert_at_tail(string val)
    {
        Node *newNode = new Node (val);
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next  = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    


    Node * find (string val)
    {
        // cout<<"obj.head->val = "<<val<<endl;
        Node *current = head;
        while(current != NULL)
        {
            if(current->val == val)
            {
                return current;
            }
            current = current ->next;
        }

        return NULL;
    }



};




void visit(Basic_Operation & obj,Node *&current,string &address)
{
    Node * found = obj.find(address);
    if(found != NULL)
    {
        current = found;
        cout<<current->val<<endl;
    }

    else 
    {
        cout<<"Not Available"<<endl;
    }

}

void Next(Node *&current)
{
    if(current ->next != NULL)
    {
        current = current->next;
        cout<<current->val<<endl;
    }
    else 
    {
        cout<<"Not Available"<<endl;
    }
}

void Previous(Node *&current)
{
    if(current ->prev != NULL)
    {
        current = current->prev;
        cout<<current->val<<endl;
    }

    else 
    {
        cout<<"Not Available"<<endl;
    }
}


int main()
{
    Node * head = NULL; 
    Basic_Operation obj;
    
    string st;
    while(true)
    {
        cin>>st;
        if(st =="end")
        {
            break;
        }

        obj.insert_at_tail(st);
        
        
    }


    int q;
    cin>>q;

    Node *current = obj.find(obj.head->val);
    // cout<<"value of current : "<<current->val<<endl;

    while(q--)
    {
        string cmd;
        cin>>cmd;
        if(cmd == "visit")
        {
            string add;
            cin>>add;
            visit(obj,current,add);
        }

        else if(cmd == "next")
        {
            Next(current);
        }

        else if(cmd == "prev")
        {
            Previous(current);
        }
    }
    

    

    return 0;
}