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

int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);

    // head is now a pointer.Dereference korte hobe
    head ->next = a;
    // "->" is known as dereferencing operator. so don't panic.
    cout<<head->val<<endl;
    cout<<a->val<<endl;

    cout<<head->next->val<<endl;
    cout<<(*(*head).next).val<<endl;
    
    

    return 0; 
}