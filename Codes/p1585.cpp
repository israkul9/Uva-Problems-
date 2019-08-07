//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
using namespace std;



int main()
{

    int n ;

    cin >> n;
    cin.ignore() ;
    while(n--)
    {
        string str ;


        getline( cin, str );

        int cur = 1, tot = 0 ;
        for(int i = 0 ; i<(int)str.length() ; ++i)
        {
            if(str[i]=='O')
            {
                tot = tot + cur ;

                cur++;
            }
            else
            {
                cur = 1 ;
            }
        }
        cout<< tot <<endl;
    }

    return 0 ;
}

