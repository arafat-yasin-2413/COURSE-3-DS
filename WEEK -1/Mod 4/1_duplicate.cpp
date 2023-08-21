// https://prnt.sc/0Vqc24bCm5at

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // What are you changing?
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    sort(arr,arr+n);

    bool isDuplicate = false;

    for(int i =0;i<n-1;i++)
    {
        if(arr[i] == arr[i+1])
        {
            isDuplicate = true;
        }
    }

    if(isDuplicate == false)
        cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0; 
}