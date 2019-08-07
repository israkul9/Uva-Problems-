///Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;




int main()
{
    int i,j,query,digit,x,t,test,m;

    string s1,s2;
    cin>>test;

    for(m=0; m<test; m++)
    {

        cin>>s1;

        cin>>query;

        for(x=1; x<=query; ++x)
        {
            digit = 0;

            cin>>s2;

            for( t=0; t<s1.size(); t++)
            {
                if(s2[0]==s1[t])
                {
                    digit = t;
                    break;
                }
            }
            int count =0;

            for(i=0; i<s2.size(); ++i)
            {
                if(s2[i]==s1[digit])
                {
                    count++;
                    digit++;
                }
            }
            if(count==s2.size())
            {
                cout<<"y"<<endl;
            }
            else
            {
                cout<<"n"<<endl;
            }
        }

    }


    return 0;
}

