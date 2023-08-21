// https://prnt.sc/VTAomukU78wD


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            if(i==j and i+j == n-1)
            {
                cout<<"X";
            }

            else if(i+j == n-1)
            {
                cout<<"/";
                continue;
            }

            else if(i==j)
            {
                cout<<"\\";
            }

            else 
            {
                cout<<" ";
            }


        }
        cout<<endl;
    }

    return 0; 
}