
//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
using namespace std;


vector < int > vec ;


int main()
{

    int  n, data,tst;


    cin >> tst ;
    while(tst--)
    {

        cin >> n ;
        int sum = 0 ;
        for( int i = 1 ; i<=n ; ++i)
        {
            cin >> data ;

            if(i==1)
            {
                vec.push_back( data );
            }
            else
            {
                int cnt = 0 ;
                for(int j = 0 ; j<vec.size() ; ++j)
                {
                    if(vec.at(j)<=data)
                    {
                        ++cnt ;
                    }
                }
                vec.push_back( data );
                sum+=cnt ;
            }

        }
        cout<< sum <<endl;
        vec.clear() ;
    }
    return 0;
}



