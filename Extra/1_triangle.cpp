#include<bits/stdc++.h>
using namespace std;

/*
kahini hocche 0. 0 asle seta kono triangle hobe na, but apnk triangle banate hobe. so, a,b,c sob gula ek sathe 0 hole apni no print korben..

*/

int main()
{
    int a,b,c;
    cin>> a >> b >> c;

    if(a==0 or b == 0 or c == 0) cout<<"No"<<endl;
    else if( a != b or a != c or b != c) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;

    return 0;
}