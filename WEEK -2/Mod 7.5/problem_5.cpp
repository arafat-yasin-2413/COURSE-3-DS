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





void print_Linked_List(Node *head,Node *tail)
{
    cout<<"Your Linked List : ";
    Node *temp = head;

  
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl<<endl; 
   
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

    cout<<endl<<"Before sorting:"<<endl;
    print_Linked_List(head,tail);
  

    for(Node * i = head; i->next != NULL; i = i->next)
    {
        for (Node * j = i->next; j!= NULL; j= j->next)
        {
            if(i->val < j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    cout<<"After Sorting:"<<endl;
    print_Linked_List(head,tail);


    


    

    return 0; 
}