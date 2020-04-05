#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>=0)
    {
        if(b>=0)
            cout<<"1st Quadrant";
        else cout<<"4th Quadrant";
    }
    else{
        if(b>=0) cout<<"2nd quadrant";
        else cout<<"3rd quadrant";
    }
}
