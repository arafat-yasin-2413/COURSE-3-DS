

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

void insertion_at_Tail(Node *&head, int val);
void print_linked_list(Node *head);
void insert_at_position(Node *head, int pos, int val);
void insert_at_Head(Node *&head, int val);
void delete_from_position(Node *head, int pos);
void delete_from_head(Node *&head);




void insertion_at_Tail(Node *&head, int val)
{
    // List jodi empty thake tokhon amra notun node ta k head node kore dibo. kintu head er reference chara kaj ta ei void function er moddhe korle main function jante parbe na. tai amra head er reference niye kaj korbo. jate kore main function o notun head er sathe updated thakte pare.

    Node *newNode = new Node(val);
    // case 1: list can be empty
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Inserted the first node" << endl;
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

    cout << endl
         << "Inserted at Tail " << endl
         << endl;
}

void print_linked_list(Node *head)
{
    cout << endl
         << "Your Linked List : ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);

    Node *temp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;

        if(temp == NULL)
        {
            cout<<endl<<"Invalid index.I have to return"<<endl<<endl;
            return;

            // 'return' করে দিলে আর নিচে নামবে না। 
        }
    }

    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl
         << "Inserted at position " << pos << endl
         << endl;
}

void insert_at_Head(Node *&head, int val)
{
    Node *newNode = new Node(val);

    newNode->next = head;
    head = newNode;
    cout << endl
         << "Inserted at Head" << endl
         << endl;
}

void delete_from_position(Node *head, int pos)
{
    Node *temp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;

        if(temp == NULL)
        {
            cout<<endl<<"!!! Invalid index loop !!!"<<endl<<endl;
            return;

            // 'return' করে দিলে আর নিচে নামবে না। 
        }
    }

    // temp কিন্তু এখনো পজিশন ১ এই আছে।
    // 10       20      30      40      50
    //         temp   delNode

    // আমরা পজিশন ২ এর ভ্যালু ৩০ ডিলিট করতে আসছি।


    // ১ টা মাত্র নোড থাকলে ... নিচের কাজটুকু করবে

    if(temp->next == NULL)
    {
        cout<<endl<<"!!! Invalid index !!!"<<endl<<endl;
            return;
    }


    Node *delNode = temp->next;

    temp->next = delNode->next;
    // temp->next = temp->next->next;

    delete delNode;

    cout<<endl<<"*** Deleted from position ***"<<pos<<endl<<endl;
}

void delete_from_head(Node *&head)
{

    if(head == NULL)
    {
        cout<<endl<<"!! Head is not available !!"<<endl<<endl;
        return;
    }
    Node *delNode = head;

    head = delNode->next;

    delete delNode;

    cout<<endl<<"*** Deleted from Head ***"<<endl<<endl;

}


/*
    যেসকল এরর পসিবলঃ
        ১। "Insertion At Tail" এর ক্ষেত্রে যদি হেড ই না থাকে।  অর্থাৎ লিস্ট খালি থাকলে।

        ২। "Print the list"  এর ক্ষেত্রে নাথিং টু worry.

        ৩। "Insert at position" এর ক্ষেত্রে সাইজের চাইতে বড়   ( উল্টাপাল্টা ) পজিশন( যেমন ১০০) দিলে ফর লুপ চলতে চলতে একসময় "temp" কে "NULL" এ নিয়ে যাবে। যেখানে যেয়ে আমি ইন্সারট করতে গেলে "Segmentation fault" খাবো।  

        ৪। "Insert At Head" এর ক্ষেত্রে হেড খালি থাকলে কি কোনো সমস্যা হবে? না খোকা, ভয় পাস না। কোনো সমস্যাই হবে না।
        
        ৫। "Delete from position" এর ক্ষেত্রে উল্টাপাল্টা পজিশন ইনপুট দিলে ঝামেলা হবে । 

        ৬। "Delete from Head" এর ক্ষেত্রে হেড ই যদি না থাকে অর্থাৎ লিস্ট খালি অবস্থায় দিলে "segmentation fault" খাবো। 
*/
int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << endl;
        cout << "Option 1 : Insertion At Tail" << endl; // done
        cout << "Option 2 : Print The List" << endl; // no need
        cout << "Option 3 : Insert at Position" << endl; // done
        cout << "Option 4 : Insert At Head" << endl; // no need
        cout << "Option 5 : Delete from position" << endl; // done
        cout << "Option 6 : Delete from Head" << endl; // done
        cout << "Option 7 : Terminate" << endl;

        int op;
        cout << endl<<"Enter your Option : ";
        cin >> op;

        if (op == 1)
        {
            // ekhane ami tail a ekta node add korbo. tahole amar ekta function lagbe. Jei function k ami ekhan theke head pass korbo and ekta value pass korbo.
            int val;
            cout << "Enter Value : ";
            cin >> val;
            insertion_at_Tail(head, val);
        }

        else if (op == 2)
        {
            print_linked_list(head);
        }

        else if (op == 3)
        {
            int pos;
            cout << "Enter position : ";
            cin >> pos;
            cout << "Enter value : ";
            int val;
            cin >> val;

            if (pos == 0)
            {
                insert_at_Head(head, val);
            }
            else
            {
                insert_at_position(head, pos, val);
            }
        }

        else if (op == 4)
        {
            cout << "Enter value : ";
            int val;
            cin >> val;
            insert_at_Head(head, val);
        }

        else if (op == 5)
        {
            int pos;
            cout << "Enter position : ";
            cin >> pos;

            if (pos == 0)
            {
                delete_from_head(head);
            }

            else
            {
                delete_from_position(head, pos);
            }
        }

        else if (op == 6)
        {
            delete_from_head(head);
        }

        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}
