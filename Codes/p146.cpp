#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    while(getline(cin,s))
    {
        if(s.compare("#")==false){
            break;
        }
        if(next_permutation(s.begin(),s.end()))
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<"No Successor"<<endl;
        }
    }

    return 0;
}
