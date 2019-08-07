
//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;


string str, ans = "" ;

char func (char x)
{
    if( x=='B' or x=='F' or x=='P'  or x=='V' )
    {
        return '1' ;
    }
    else if ( x=='C' or  x=='G' or  x=='J' or  x=='K' or  x=='Q'  or  x=='S' or  x=='X' or  x=='Z')
    {
        return '2' ;
    }
    else if(x=='D' or x=='T')
    {
        return '3';
    }
    else if(x=='L')
    {

        return '4' ;
    }
    else if( x=='M' or x=='N' )
    {
        return '5' ;
    }
    else if(x=='R')
    {
        return '6' ;
    }
    else
    {
        return '0' ;
    }

}


int main()
{

    while (cin >> str )
    {

        for(int i = 0 ; str[i] ; ++i)
        {
            ans = ans + func(str[i]);
        }
        // cout<< ans <<endl;

        for(int i = 0 ; i<ans.length() ; ++i)
        {
            if(ans[i]>='1' and ans[i]<='6')
            {
                while(ans[i]==ans[i+1])
                {
                    ans.erase(i,1);
                }
            }
        }

        for(int i = 0 ; ans[i]; ++i)
        {
            if(ans[i]!='0')
                cout<<ans[i];
        }
        puts("");
        ans.clear() ;
        str.clear() ;
    }
    return 0;
}



