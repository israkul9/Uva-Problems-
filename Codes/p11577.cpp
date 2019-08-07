
//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;


map<char,int>m;
map<char,int>::iterator it;
vector<int>v;

int main()
{


    int test;
    cin>>test;
    cin.ignore();
    while(test--)
    {
        string ch;

        getline(cin,ch);

        for(int i=0; i<ch.length(); ++i)
        {

            if(ch[i]>='A' && ch[i]<='Z')
            {
                ch[i]=ch[i]+32;
            }
        }
        for(int j=0; j<ch.length(); j++)
        {
            if(ch[j]>='a' && ch[j]<='z')
            {
                m[ch[j]]++;
            }
        }
        for(it = m.begin(); it!=m.end(); ++it)
        {
            // cout<<it->first<<" "<<it->second<<endl;
            v.push_back(it->second);
        }
        sort(v.begin(),v.end());


        for(it = m.begin(); it!=m.end(); ++it)
        {
            if(it->second==v[v.size()-1])
                cout<<it->first;
            // v.push_back(it->second);
        }
       cout<<endl;

        v.clear();
        m.clear();
        ch.clear();

    }
    return 0;
}



