#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtTail(Node *&head,Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return ; 
    }
    tail->next = newNode;
    tail = newNode;
}

int sizeOfList(Node *head)
{
    Node *temp = head;
    int cnt = 0; 
    while(temp!=NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
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

int main()
{
    int a[100]={0};

    
    Node *head = NULL;
    Node *tail = NULL;
    // cout<<"kikorchen?"<<endl;
    int val;
    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        a[val]++;
        insertAtTail(head,tail,val);

    }

    // for(int i = 0; i<100; i++)
    // {
    //     if(a[i] >0)
    //     {
    //         cout<<i<<" "<<a[i]<<endl;
    //     }
    // }

    bool flag = true;
    int j = 0;
    while(j<100)
    {

        if(a[j] > 0)
        {
            // cout<<j<<" "<<a[j]<<endl;
            if(a[j] > 1)
            {
                flag = false;
            }
        }
        
        j++;
    }




    // for(Node *i = head; i->next !=NULL; i=i->next)
    // {
    //     for(Node *j= i->next; j!=NULL ; j= j->next)
    //     {
    //         // cout<<i->val<<" "<<j->val<<endl;
    //         if(i->val > j->val) swap(i->val,j->val);
    //     }
    //     // cout<<endl;
    // }

    // printList(head);
    // cout<<flag <<endl;
    if(flag == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    

    return 0;
}


