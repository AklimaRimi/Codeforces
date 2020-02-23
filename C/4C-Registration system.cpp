#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string , int> ma;
    map<string , int> :: iterator it,ip;
    int i,j,k,l,m,n,o,p;
    string s;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s;
         ma[s]++;
        it = ma.find(s);
        if(it->second>1)
        {

            cout<<s<<it->second-1<<endl;
        }
        else
        {

            cout<<"OK"<<endl;
        }
    }
}
