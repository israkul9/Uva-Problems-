#include<bits/stdc++.h>
using namespace std;


int main()
{

    string s1,s2;

    while(cin>>s1)
    {
        cin>>s2;

        int l1 = s1.length();
        int l2 = s2.length();

        int ck=0,x=0;

        for(int i=0; i<l2; ++i)
        {
            if(s2[i]==s1[x])
            {
                ck++;
                x++;
            }
        }
        if(ck==l1)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}

