
#include<bits/stdc++.h>
using namespace std;

int main()
{
   // type 1: vector<type>v -> Constructing vector with zero elements
   cout<<"type 1:"<<endl;
   vector<int>v;
   cout<<v.size()<<endl;

   // type 2: array vector 
   cout<<"type 2:"<<endl;
   vector <int> v2(5);
   for(int x: v2)
      cout<<x<<" ";
      cout<<endl;
   cout<<v2.size()<<endl;

   // type 3
   cout<<"type 3:"<<endl;
   vector<int> v3(5,13);
   for(int x3:v3)
      cout<<x3<<" ";
      cout<<endl;

   // type 4: copying from another vector
   cout<<"type 4:"<<endl;
   vector<int> v4(5,100);
   vector<int> v5(v4); // copying v4 into v5
   for(int x5:v5)
      cout<<x5<<" ";
      cout<<endl;

   // type 5: copying from an array
   cout<<"type 5:"<<endl;
   int arr[5]={10,20,30,40};
   vector<int>v6(arr,arr+5);
   for(int x6:v6)
      cout<<x6<<" ";
      cout<<endl;

   // initialization 
   vector<int>v7={1,2,3,4};
   // for(int i = 0;i<v7.size();i++)
   //    cout<<v7[i] <<" ";

   for(int x7: v7)
      cout<<x7<<" ";
      cout<<endl;
    

   return 0; 
}


































/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v;

 // type 1
    // cout<<v.size()<<endl;

 // type 2
    // vector<int> v(5); 
 
 // type 3
   //  vector<int> v(5,4); 
   //  cout<<v.size()<<endl;
   //  for(int i =0;i<5;i++)
   //      cout<<v[i]<<" ";
   //      cout<<endl;

   //  vector<int> v2(5,100);
   //  vector<int> v3(v2); // type 4
   //  for(int i =0;i<v3.size();i++)
   //      cout<<v3[i]<<" ";
   //      cout<<endl;
   //      cout<<v3.size()<<endl;
   //      cout<<endl;

    int a[6]={1,2,3,4,5,6};

    vector<int>v4(a,a+6); // type 5

    for(int i=0;i<6; i++)
        cout<<v4[i]<<" ";
        cout<<endl;
        cout<<v4.size()<<endl;


 // type 6
   //  vector<int>v6={2,4,6,7};
   //  for(int i =0;i<4;i++)
   //      cout<<v6[i]<<" ";

   //      cout<<endl; 


    return 0; 
}

*/




