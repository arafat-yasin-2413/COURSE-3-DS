// https://prnt.sc/BzM09cmzeQNK

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

void insertion_at_Tail(Node *&head,int val)
{
    Node *newNode = new Node (val);
   
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    
    while(temp->next != NULL)
    {
        temp = temp->next;
        
    }

    temp->next = newNode;


    

}

void print_linked_list(Node *head)
{
    cout<<endl<<"Your Linked List : ";
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }

    cout<<endl<<endl;
    
}

int size_of_List(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while(temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    return cnt;
}



int main()
{
    cout<<"Enter values : ";
    Node *head = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }

        insertion_at_Tail(head,val);

    }

    print_linked_list(head);
    int size = size_of_List(head);
    cout<<"Size of the Linked List : "<<size<<endl;



    return 0; 
}