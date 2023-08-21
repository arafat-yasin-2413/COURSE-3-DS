#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>myList={10,20,30,40,50,60,70};
    list<int>newList;
    // newList = myList;
    newList.assign(myList.begin(),myList.end());
    

    // for(int val:newList)
    // {
    //     cout<<val<<" ";
    // }
    // cout<<endl;

        // myList.push_back(100);
        // myList.push_front(65);
        // myList.pop_back();
        // myList.pop_back();
        // myList.pop_back();
        // myList.pop_front();

    // myList.insert(next(myList.begin(),2),100);
    // myList.insert(next(myList.begin(),2),{33,44,55});

    list<int>newList2={4,5,6};
    vector<int>v={60,70,80};
    int a[3] = {67,68,69};
    // myList.insert(next(myList.begin(),2),newList2.begin(),newList2.end());
    // myList.erase(next(myList.begin(),3));

    // myList.insert(next(myList.begin(),2),v.begin(),v.end());
    // myList.insert(next(myList.begin(),2),a,a+3);


    // myList.erase(next(myList.begin(),2),next(myList.begin(),5));

    list<int>newList3={20,30,40,50,30,60};
    replace(newList3.begin(),newList3.end(),30,100);

    // for(int val:myList)
    // {
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    // auto it = find(newList3.begin(),newList3.end(),101);
    auto it = find(newList3.begin(),newList3.end(),40);
    cout<<*it<<endl;
    for(int val:newList3)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    if(it == newList3.end())
    {
        cout<<"Not Found"<<endl;
    }

    else 
    {
        cout<<"Found"<<endl;    
    }



    return 0; 
}