#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll ; 
    int marks; 

    Student(string name,int roll, int marks)
    {
        this->name = name; 
        this->roll = roll;
        this->marks = marks; 
    }
};

class cmp
{
    public:
    bool operator()(Student a, Student b)
    {
        if(a.marks > b.marks) 
        {
            return true;
            // বাম পাশে বড় থাকলে চেঞ্জ করতে বলতেছি। 
            // তাহলে এখন ডান পাশে ছোটটা থাকবে। ছোট থেকে বড়।
        }

        else 
        {
            return false;
            // বাম পাশে বড় না থাকলে কিছুই করবোনাs
        }
    }
};

int main()
{
    priority_queue< Student, vector<Student>, cmp > pq;
    int n;cin>>n;
    while(n--)
    {
        string name;
        int roll,marks;
        cin>> name >> roll >> marks;
        Student obj(name,roll,marks);
        pq.push(obj);
    }

    while(!pq.empty())
    {
        cout<<pq.top().name <<" " << pq.top().roll<<" "<<pq.top().marks<<endl;
        pq.pop();
    }


    

    return 0;
}


























/*
#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }


};

class cmp
{
    public:
        bool operator()(Student a, Student b)   
        {
            if(a.marks > b.marks) return true;
            else if(a.marks < b.marks) return false;

            else 
            {
                if(a.roll > b.roll) return true;
                else return false;
            }
        }
};  

int main()
{
    int n; cin>> n;
    priority_queue< Student , vector<Student>, cmp  > pq;

    while(n--)
    {
        string name; 
        int roll, marks;

        cin>> name >> roll >> marks;
        Student obj(name,roll,marks); 
        pq.push(obj);
    }
    
    while(!pq.empty())
    {
        cout<<pq.top().name <<" " <<pq.top().roll<<" "<<pq.top().marks<<endl;
        pq.pop();
    }

    return 0;
}
*/