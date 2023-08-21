#include <bits/stdc++.h>
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
        if (a.marks < b.marks)
        {
            return true;
        }

        else if (a.marks > b.marks)
        {
            return false;
        }

        else
        {
            if (a.roll > b.roll)
            {
                return true;
            }

            else
            {
                return false;
            }
        }
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    while (n--)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;

        Student obj(name, roll, marks);
        pq.push(obj);
    }

    // while(!pq.empty())
    // {
    //     cout<<pq.top().name <<" "<<pq.top().roll<<" "<< pq.top().marks <<endl;
    //     pq.pop();
    // }

    int q;
    cin >> q;
    while (q--)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj2(name, roll, marks);
            pq.push(obj2);
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                // break;
            }
            else
            {
                cout << "Empty" << endl;
                // break;
            }
        }

        else if (command == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                // break;
            }
            else
            {
                cout << "Empty" << endl;
                // break;
            }
        }

        else if(command == 2)
        {
            if(!pq.empty())
            {
                pq.pop();
            }

            if(!pq.empty())
            {
                cout<<pq.top().name<<" " <<pq.top().roll<<" " <<pq.top().marks<<endl;
                // break;
            }
            else
            {
                cout<<"Empty"<<endl;
                // break;
            }
        }
    }

    return 0;
}