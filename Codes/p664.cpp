//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
using namespace std;



int main()
{

    string first,last,check;
    map< string,string >mp;

    int test;
    cin>>test;
    cin.ignore();
    for(int i=0; i<test; ++i)
    {
        getline(cin,first);
        getline(cin,last);
        mp.insert(pair<string,string>(first,last));
    }
    // map< string,string >::iterator it;

    int query;
    cin>>query;
    cin.ignore();
    for(int j=0; j<query; j++)
    {
        getline(cin,check);
        cout<<mp[check]<<endl;
    }

    return 0;
}

