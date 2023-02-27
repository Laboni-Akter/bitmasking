#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    string s="abc";
    string a[(1<<3)];
    for( ll mask=0;mask<(1<<3);mask++)
    {
       string ss="";
       for(ll j=0;j<3;j++)
       {
           if((mask&(1<<j)))
            {
                ss = ss+s[j];
               //cout<<s[j]<<endl;
            }
       }
       //reverse(ss.begin(),ss.end());
       a[mask]=ss;
    }
    for(ll i=0;i<(1<<3);i++)
    {
        cout<<a[i]<<endl;
    }
}
