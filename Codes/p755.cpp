//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;


map < char, char > mp ;

map < string, int > freq ;

map < string, int > ::iterator it ;


void mapping ()
{
    mp.clear() ;
    mp[ 'A' ] = '2' ;
    mp[ 'B' ] = '2' ;
    mp[ 'C' ] = '2' ;

    mp[ 'D' ] = '3' ;
    mp[ 'E' ] = '3' ;
    mp[ 'F' ] = '3' ;

    mp[ 'G' ] = '4' ;
    mp[ 'H' ] = '4' ;
    mp[ 'I' ] = '4' ;

    mp[ 'J' ] = '5' ;
    mp[ 'K' ] = '5' ;
    mp[ 'L' ] = '5' ;


    mp[ 'M' ] = '6' ;
    mp[ 'N' ] = '6' ;
    mp[ 'O' ] = '6' ;

    mp[ 'P' ] = '7' ;
    mp[ 'R' ] = '7' ;
    mp[ 'S' ] = '7' ;

    mp[ 'T' ] = '8' ;
    mp[ 'U' ] = '8' ;
    mp[ 'V' ] = '8' ;


    mp[ 'W' ] = '9' ;
    mp[ 'X' ] = '9' ;
    mp[ 'Y' ] = '9' ;

}

int main ()
{

    mapping();
    int test ;

    cin >> test ;


    while(test--)
    {

        int query ;

        cin >> query ;

        

        while(query--)
        {

            string number, ans = "" ;

            cin >> number ;

            // cout<<number<<endl;


            for(int i = 0 ; i<number.length() ; ++i)
            {

                if( isdigit(number[i]) )
                {
                    ans += number[i] ;
                }
                else if(number[i]>='A' and number[i]<='Z')
                {

                    ans += mp[ number[i] ] ;
                }

            }
            //cout<<ans<<end
            freq[ ans ]++ ;
            number.clear(), ans.clear() ;
        }
        bool flag = false ;

        for(it = freq.begin() ; it!=freq.end() ; ++it)
        {
            if(it->second>1)
            {
                flag = true ;
                string ck = it->first ;
                cout<<ck[0]<<ck[1]<<ck[2]<<"-";
                cout<<ck[3]<<ck[4]<<ck[5]<<ck[6]<<" "<<it->second<<endl ;
                ck.clear() ;
            }
        }

        if(!flag)
        {
            cout<<"No duplicates."<<endl;
        }
        freq.clear() ;
        if(test)
            puts("");
       

    }



    return 0;
}


