#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v)
{
    for(int i=0;i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


void printArray(int a[],int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v; 
    // initializes vector with size = 0;

    vector<int> v2(4);
    vector<int> v3(4,96);
    vector<int> vec {2,4,5,6}; 
    // vec এর পর সমান চিহ্ন দিলেও হয়, না দিলেও হয়।
    vector<int> v4(vec);

    int ar[5]{10,20,30,40,50};
    // ar এর পর সমান চিহ্ন দিলেও হয়, না দিলেও হয়।
    vector<int> v5(ar,ar+5);
    // printVector(v5);

    
    int a[6]{1,2,3,4,5,6};
    printArray(a,6);

    return 0;
}