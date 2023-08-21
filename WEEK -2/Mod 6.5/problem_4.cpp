// https://prnt.sc/jX0XuVPMvrFK

#include <bits/stdc++.h>
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

void print_Linked_List(Node *head);
void insert_At_Tail(Node *&head, int val);
void insert_At_Position(Node *head, int pos, int val);
void insert_At_Head(Node *&head, int val);
void delete_from_position(Node *head, int pos);
void delete_from_head(Node *&head);










void print_Linked_List(Node *head)
{
    Node *temp = head;

    cout << endl
         << "Your Linked List : ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

void insert_At_Tail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        // cout << endl
        //      << "Inserted the first node" << endl
        //      << endl;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    // cout << endl
    //      << "Inserted At Tail" << endl
    //      << endl;
}

void insert_At_Position(Node *head, int pos, int val) // done
{
    Node *newNode = new Node(val);

    Node *temp = head;
    bool flag = false;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;

        if (temp == NULL)
        {
            cout << "Invalid Index" << endl;
            flag = true;
            return;
        }
    }

    newNode->next = temp->next;
    temp->next = newNode;

    print_Linked_List(head);
}

void insert_At_Head(Node *&head, int val)
{
    Node *newNode = new Node(val);

    newNode->next = head;
    head = newNode;

    print_Linked_List(head);
}

void delete_from_position(Node *head, int pos) // done
{

    // except from head
    Node *temp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }

    if (temp->next == NULL)
    {
        cout << endl
             << "Invalid Index.temp's next is also null" << endl
             << endl;
        return;
    }

    Node *delNode = temp->next;
    // temp->next = delNode->next;
    temp->next = temp->next->next;

    delete delNode;
    cout << endl
         << "Deleted from position " << pos << endl
         << endl;
}

void delete_from_head(Node *&head) // done
{

    if (head == NULL)
    {
        cout << endl
             << "Head is not available" << endl
             << endl;
        return;
    }
    Node *delNode = head;
    head = delNode->next;
    // head = head->next;
    delete delNode;
    cout << endl
         << "Deleted from Head " << endl
         << endl;
}

int main()
{

    cout << "Enter values : ";
    Node *head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        insert_At_Tail(head, val);
    }

    print_Linked_List(head);

    int query; cin>>query;
    while(query--)
    {
        int pos,val;
        cin>>pos;
        cin>>val;
        if(pos == 0)
        {
            insert_At_Head(head,val);
        }
        else 
        {
            insert_At_Position(head,pos,val);
        }
        

    }

    return 0;
}

/*

int op ;
    while(true)
    {
        cout<<"Option 1 : Insert At Tail "<<endl;
        cout<<"Option 2 : Print Linked List "<<endl;
        cout<<"Option 3 : Insert At Position"<<endl;
        cout<<"Option 4 : Insert At Head "<<endl;
        cout<<"Option 5 : Delete From Position "<<endl;
        cout<<"Option 6 : Delete From Head "<<endl;
        cout<<"Option 7 : Terminate "<<endl;


        cout<<endl<<"Enter Option : ";
        cin>>op;

        if(op == 1)
        {
            int val;
            cout<<"Enter value : ";
            cin>>val;
            insert_At_Tail(head,val);
        }

        else if(op == 2)
        {
            print_Linked_List(head);
        }

        else if(op == 3)
        {
            int pos,val;
            cout<<endl<<"Enter Position : ";
            cin>>pos;
            cout<<"Enter Value : ";
            cin>>val;
            if(pos == 0)
            {
                insert_At_Head(head,val);
            }
            else
            {
                insert_At_Position(head,pos,val);
            }


        }


        else if(op == 4)
        {
            int val;
            cout<<"Enter value : ";
            cin>>val;

            insert_At_Head(head,val);
        }

        else if(op == 5)
        {
            int pos;
            cout<<"Enter position : ";
            cin>>pos;

            if(pos == 0)
            {
                delete_from_head(head);
            }

            else
            {
                delete_from_position(head,pos);
            }


        }

        else if(op == 6)
        {
            delete_from_head(head);
        }
        else if(op == 7)
        {
            cout<<endl<<"       << Terminated >>"<<endl;
            break;
        }

    }

*/