
//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;


map < vector<int> , int > mp ;
map <vector<int> , int > ::iterator it ;



int main ()
{
    //string a, b, c, d, e, ans = "" ;

    int cs ;
    while (cin >> cs, cs )
    {
        for(int cas = 1 ; cas<=cs ; ++cas)
        {
            
            vector< int > c(5) ;
            for(int i = 0 ; i<5 ; ++i)
            {
                int data ;
                cin >> data ;
                c.push_back(data);
            }
            sort(c.begin() , c.end()) ;
            mp[c]++ ;
            c.clear();
          
        }
       
 
        int m = 0 ;


        for( it = mp.begin() ; it != mp.end() ; ++it)
        {
            m = max( m, it->second ) ;
        }


        int count = 0;


        
        
        for( it = mp.begin() ; it != mp.end() ; ++it)
        {
            if(it->second==m)
            {
                count++;
            }
        }

        printf("%d\n", count*m);

//        cout<<vec.size()<<endl;
//        cout<<sum<<endl;

//        int f = vec.front() ;
//        if(sum==f*vec.size())
//        {
//            cout<<sum<<endl;
//        }else
//        {
//            cout<<m<<endl;
//        }
//        vec.clear() ;

        mp.clear() ;
       



    }
    return 0;
}
///  000001111123488
