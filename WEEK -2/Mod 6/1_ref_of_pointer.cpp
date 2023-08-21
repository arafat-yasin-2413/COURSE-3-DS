#include<bits/stdc++.h>
using namespace std;

// void fun(int *p)
void fun(int * &p)
{
    //*p = 20;
    // p = NULL;
    cout<<"address of p: "<<&p<<endl;

}


int main()
{
    int val =  10;
    int *ptr=&val;

    fun(ptr);
    // cout<<*ptr<<endl;
    cout<<"address of ptr: "<<&ptr<<endl;
    

    return 0; 
}