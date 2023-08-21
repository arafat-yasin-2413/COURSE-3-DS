// https://prnt.sc/HTBnQSGMDVC6

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

void check_duplicate_element(Node *head)
{
    Node *temp = head;

    int a[100]={0};

    
    while(temp != NULL)
    {
        int val = temp->val;
        a[val]++;
        temp = temp->next;
    }


    int flag = 0;

    for(int i=0;i<100; i++)
    {
        if(a[i]>0)
        {
            // cout<<i<<" -> "<<a[i]<<endl;
            if(a[i] > 1)
            {
                flag = 1;
            }

        }
    }

    // cout<<flag<<endl;

    if(flag == 1 ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


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
    // int size = size_of_List(head);
    // cout<<"Size of the Linked List : "<<size<<endl;


    check_duplicate_element(head);
    



    return 0; 
}