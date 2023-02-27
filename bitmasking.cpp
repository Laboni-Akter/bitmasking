#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    if(n&(1<<(k-1)))
    {
        cout<<"kth bit is set"<<endl;
    }
    else
        cout<<"kth bit is not set"<<endl;
}
