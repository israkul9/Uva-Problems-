//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
using namespace std ;




map< string, int > mp;
map< string, int > :: iterator it ;



map < string, int > tusher ;
map < string, int > ::iterator tus ;



int main()
{


    int n,  cs, b,sum = 0;

    string a ;
    while (cin >> n >> cs)
    {



        for(int i = 0 ; i<n ; ++i)
        {
            cin >> a ;

            cin >> b;

            tusher[a] = b ;
        }


        cin.ignore() ;
        while(cs--)
        {
            sum = 0 ;
           
            string ch ;
            while( cin >> ch )
            {
                if(ch==".")
                    break ;
                else
                    mp[ ch ]++ ;
            }

            for(tus = tusher.begin(); tus!=tusher.end(); ++tus)
            {

                it = mp.find(tus->first) ;

                if(it!=mp.end())
                {
                    sum = sum + (it->second*tus->second);
                }

            }
            cout<<sum<<endl;
            mp.clear();

        }
        tusher.clear();
       
        a.clear() ;
    }


    return 0;
}

