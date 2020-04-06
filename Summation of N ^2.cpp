#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum;
    cin>>n;
    sum=n*(n+1)*(2*n+1);
    sum/=6;
    cout<<sum<<endl;
}
