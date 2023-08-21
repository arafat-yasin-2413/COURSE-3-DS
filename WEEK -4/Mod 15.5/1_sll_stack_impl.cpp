////// Final code // eta submit korechi///







#include<bits/stdc++.h>
using namespace std;


/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack
{
public:
    Node *head = NULL;
    // এখানে হেড নাল করে দিলে স্ট্যাক কন্সট্রাক্টরের মধ্যে 
    // কিছু করার দরকার নেই
    
    int sz = 0; 
    
    Stack()
    {
        // head = NULL;
        // এখানে হেড নাল করলে কি সুবিধা?
    }
    
    int getSize()
    {
        return sz;
    }
    bool isEmpty()
    {
        // return head == NULL;  
        if(sz == 0)
            return true;
        else 
            return false;
    }
    void push(int data)
    {
        sz++;
        Node *newNode  = new Node(data);
        if(head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;

        // যদিও হেড নালে আছে কিনা চেক করার
        // দরকার নেই। কিন্তু আলাদা ইফ দিয়ে চেক করে
        // রিটার্ন করলে সাইজ কে শুরুতেই বাড়াতে 
        // হবে । কিন্তু এই অবস্থায় যদি সাইজ কে
        // রিটার্নের আগে বৃদ্ধি করি তাহলে সাইজ 
        // আপডেট হবে না।         
    }
    void pop()
    {
        // Node *tmp;
        if(head == NULL) return;
        Node *delNode  = head;
        head  = head->next;
        delete delNode;
        sz--;
    }
    int getTop()
    {
        if (!isEmpty())
            return head->data;
        return -1;
        
    } 
};

int main()
{
    

    return 0;
}







































///////////////////// ei code ta manually check korechi///
/*
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Stack
{
public:
    Node *head = NULL;
    
    int sz = 0; 
    
    Stack()
    {
        // head = NULL;
    }
    
    int getSize()
    {
        return sz;
    }
    bool isEmpty()
    {
        // return head == NULL;  
        if(sz == 0)
            return true;
        else 
            return false;
    }
    void push(int data)
    {
        Node *newNode  = new Node(data);
        newNode->next = head;
        head = newNode;
        sz++;
    }
    void pop()
    {
        // Node *tmp;
        if(head == NULL) return;
        Node *delNode  = head;
        head  = head->next;
        delete delNode;
        sz--;
    }
    int getTop()
    {
        if (!isEmpty())
            return head->data;
        return -1;
        
    } 
};


int main()
{
    

    return 0;
}
*/


































// Abdullah Al Naim Vaiya /////

/*
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Stack
{
public:
    Node *top;
    int size = 0; 
    Stack()
    {
        top = NULL;
    }
    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return top == NULL;  
    }
    void push(int data)
    {
        Node *tmp = new Node(data);
        tmp->data = data;
        tmp->next = top;
        top = tmp;
        size++;
    }
    void pop()
    {
        Node *tmp;
        if(top == NULL) return;
        tmp = top;
        top = top->next;
delete tmp;
        size--;
    }
    int getTop()
    {
        if (!isEmpty())
            return top->data;
        return -1;
        
    } 
};


int main()
{
    

    return 0;
}

*/