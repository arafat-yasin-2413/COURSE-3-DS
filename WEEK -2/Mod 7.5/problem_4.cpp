#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node * next;

    Node (int val)
    {
        this->val = val;
        this->next = NULL;
    }

};

void print_Linked_List(Node *head,Node *tail);
void insert_At_Tail(Node * &head,Node *&tail,int val);
void print_maximum(Node *head,Node *tail);




void print_Linked_List(Node *head,Node *tail)
{
    cout<<endl<<"Your Linked List : ";
    Node *temp = head;

  
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl; 
   
}

void insert_At_Tail(Node * &head,Node *&tail, int val) 
{
    Node *newNode = new Node (val);

    if(head == NULL)
    {
        head = newNode;
        return ;
    }

    Node *temp = head; 
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}


void print_maximum(Node *head,Node *tail)
{
    int mx = INT_MIN;

    Node *temp = head; 
    while(temp != NULL)
    {
        if(temp->val > mx)
        {
            mx = temp->val;
        }
        temp = temp->next;
    }

    cout<<endl<<"Maximum value : "<<mx<<endl;
}




int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int val;
    cout<<"Enter values : ";
    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }

        insert_At_Tail(head,tail,val);


    }

    print_Linked_List(head,tail);
    print_maximum(head,tail);



    


    

    return 0; 
}