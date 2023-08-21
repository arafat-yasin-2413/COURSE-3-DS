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

void insertAtTail(Node *&head,Node*&tail,int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return; 
    }

    tail->next = newNode;
    newNode->prev = tail; 
    tail = newNode;
}

void printList(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" "; 
        temp = temp->next;
    }
    cout<<endl; 
}

int sizeOfList(Node *head)
{
    int cnt = 0;
    Node *temp = head; 

    while(temp!= NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt; 
}

void isListSame(Node *head_1, Node *head_2)
{
    int sz1 = sizeOfList(head_1);
    int sz2 = sizeOfList(head_2);

    bool flag = true;
    // cout<<sz1<<" "<<sz2<<endl;


    if(sz1 != sz2) 
    {
        flag = false;
    }

    else 
    {
        
        Node *v1 = head_1;
        Node *v2 = head_2;

        
        while(v1!=NULL)
        {
            if(v1->val != v2->val)
            {
                flag = false;
            }

            v1 = v1->next;
            v2 = v2->next;
        }
    }

    if(flag == false) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL; 

    int val;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insertAtTail(head1,tail1,val);
    }


    Node *head2 = NULL; 
    Node *tail2 = NULL; 

    int val2;
    while(true)
    {
        cin>>val2;
        if(val2 == -1) break;
        insertAtTail(head2,tail2,val2);
    }

    // printList(head1);
    // printList(head2); 

    isListSame(head1,head2); 

    return 0;
}