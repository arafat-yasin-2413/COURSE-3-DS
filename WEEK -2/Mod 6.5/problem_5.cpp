// https://prnt.sc/A2NlmChJgWpZ


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

void insertion_at_Tail(Node *&head, int val);
void print_linked_list(Node *head);







void insertion_at_Tail(Node *&head, int val)
{
    // List jodi empty thake tokhon amra notun node ta k head node kore dibo. kintu head er reference chara kaj ta ei void function er moddhe korle main function jante parbe na. tai amra head er reference niye kaj korbo. jate kore main function o notun head er sathe updated thakte pare.

    Node *newNode = new Node(val);
    // case 1: list can be empty
    if (head == NULL)
    {
        head = newNode;
        
        return;
        // 'return' করে দিলে আর নিচে নামবে না। 
    }

    Node *temp = head;
    // case 2: list is populated
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;

   
}

void print_linked_list(Node *head)
{
    cout<< "Your Linked List : ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
  
}




int main()
{
    int val;
    Node *head = NULL;
    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }

        insertion_at_Tail(head,val);
    }
    

    // selection sort

    bool flag = false;
    for(Node* i = head; i->next != NULL;i = i->next)
    {
    
        // j=i+1 means j = i->next
        for(Node* j = i->next; j!=NULL;j=j->next)
        {
            // cout<<i->val<<" "<<j->val<<endl;
            if(i->val > j->val)
            {
                flag = true;
                // swap(i->val,j->val);
            }
        }
        
    }

    cout<<endl;
    // print_linked_list(head);
    if(flag == true) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;







    return 0; 
}