#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};



void print_normal(Node *head);
int list_size(Node *head);
void print_ulta(Node *tail );
void insert_at_tail(Node *&head,Node *&tail,int val);
void delete_at_position(Node *head,int pos);
void delete_at_head(Node *&head,Node *&tail);
void delete_at_tail(Node *&head,Node *&tail);






void print_normal(Node *head)
{
    cout<<"LEFT TO RIGHT : ";
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl; 
}

int list_size(Node *head)
{
    Node *temp = head; 
    int cnt = 0;
    while(temp !=NULL)
    {
        cnt++;
        temp = temp->next;
        
    }
    return cnt;
}

void print_ulta(Node *tail )
{
    cout<<"RIGHT TO LEFT : ";
    Node *temp = tail;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}

void insert_at_tail(Node *&head,Node *&tail,int val)
{
    Node *newNode = new Node (val);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return ;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void delete_at_position(Node *head,int pos)
{
    Node *temp = head; 

    for(int i = 1 ; i<= pos-1; i++)
    {
        temp = temp->next;
    }

    Node *delNode = temp->next;
    temp ->next = delNode->next;
    delNode->next->prev = temp;
    delete delNode;

    

}

void delete_at_head(Node *&head,Node *&tail)
{
    Node *delNode = head;
    head = delNode->next;
    delete delNode;
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    head->next->prev = NULL;
    
}

void delete_at_tail(Node *&head,Node *&tail)
{
    Node *delNode = tail;
    tail = delNode->prev;
    delete delNode;
    if(tail == NULL)
    {
        head = NULL;
        return; 
    }
    delNode->prev->next = NULL;
    
    
}

int main()
{
    // cout<<"hello parrot"<<endl;
    Node *head = NULL;
    Node *tail = NULL; 

    int value; 
    while(true)
    {
        cin>>value;
        if(value == -1)
        {
            break;
        }
        insert_at_tail(head,tail,value);
    }

    int pos;cin>>pos;


    if(pos >= list_size(head))
    {
        // cout<<"greater than equal"<<endl;
        cout<<"Invalid"<<endl;
    }

    else if(pos == 0)
    {
        // cout<<"at Head"<<endl;
        delete_at_head(head,tail);
    }

    else if(pos == list_size(head)-1)
    {
        // cout<<"at tail"<<endl;
        delete_at_tail(head,tail);
        
    }

    else 
    {
        delete_at_position(head,pos); 
        // cout<<"at position" <<endl;

    }
    

   

    

    print_normal(head);
    // print_ulta(tail);
    cout<<"Size = "<<list_size(head)<< endl; 




    return 0;
}