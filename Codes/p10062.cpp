#include<bits/stdc++.h>
using namespace std;

multiset<char>ms;

set<char>s;
set<char>::iterator it;

map<int,int>mymap;
map<int,int>::iterator map_it;

int main()
{

    char ch;
    int d;

    while(1)
    {
        scanf("%c",&ch);
        if(ch=='\\')
        {
            break;
        }
        ms.insert(ch);
        s.insert(ch);
        //printf("%c",ch);
    }
    for(it=s.begin(); it!=s.end(); it++)
    {
        d = ms.count(*it);
        mymap.insert( pair<int,int>(d,*it));

    }
    for( map_it = mymap.begin(); map_it!=mymap.end(); map_it++)
    {
        cout<< map_it->second <<" "<< map_it->first <<endl;
    }
    mymap.clear();
    s.clear();
    ms.clear();

    return 0;
}

