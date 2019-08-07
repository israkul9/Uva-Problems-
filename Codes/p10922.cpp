
//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
using namespace std;



int ck (string str)
{
    int sum = 0 ;
    for(int i = 0 ; i<str.length() ; ++i)
    {
        sum += str[i]-48;
    }
    return sum ;
}



int main()
{

    string str ;

    while (cin >> str )
    {

        if(str[0]=='0')
            break ;

        int ans =   ck(str);
        //cout<< ans <<endl ;
// string s1 = to_string(ans);

        bool flag = false;
        if(ans%9==0)
        {
            flag = true;
        }

        int cnt = 0 ;
        while(true)
        {

            //cout<< ans <<endl;
            cnt++ ;
            if(ans/9==1)
                break;
            string sss = to_string( ans );

            ans = ck(sss);
        }

        if(!flag)
        {
            cout<< str <<" is not a multiple of 9."<<endl;
        }
        else
        {
            cout<< str <<" is a multiple of 9 and has 9-degree "<<cnt<<"."<<endl;
        }
        str.clear() ;
    }
    return 0;
}



