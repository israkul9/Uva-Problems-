///bismillah_hir_rahmanir_rahim




#include<bits/stdc++.h>
using namespace std;

vector<char>v;
vector<char>v2;



int main()
{
    string ch;
    while(1)
    {
        getline(cin,ch);
        if(ch=="DONE")
        {
            return 0;
        }
        for(int i=0; i<ch.size(); i++)
        {
            if(ch[i]>='A' && ch[i]<='Z')
            {
                ch[i] = ch[i] + 32;
            }
            if(ch[i]>='a' && ch[i]<='z')
            {
                v.push_back(ch[i]);
                v2.push_back(ch[i]);
            }
        }

        reverse(v.begin(),v.end());

        if(v==v2)
        {
            printf("You won't be eaten!\n");
        }
        else
        {
            printf("Uh oh..\n");
        }
        v.clear();
        v2.clear();
    }
    return 0;
}

