
//Bismillah_hir_rahmanir_rahim


///TLE :-( 

#include<bits/stdc++.h>
using namespace std;


vector< pair < float, float > > vec;
vector< float > ans ;


int main()
{

    int n ;
    float  x, y, x1,y1,x2,y2;

    while(cin >> n )
    {
        if(n==0)
        {
            break ;
        }

        while(n--)
        {
            cin >> x >> y;
            vec.push_back(make_pair( x,y ));
        }

        int ck = 0 ;
        bool flag = false;
        for(int i = 0 ; i<vec.size() ; ++i)
        {
            for(int j = i+1 ; j<vec.size() ; ++j)
            {
                x1 = vec.at(i).first ;
                y1 = vec.at(i).second ;
                x2 = vec.at(j).first ;
                y2 = vec.at(j).second ;
                float ggg =  abs(x1-x2)*abs(x1-x2)+abs(y1-y2)*abs(y1-y2) ;

                if(ggg<(float)10000)
                {
                    flag = true ;
                   
                }
                ans.push_back( sqrt(ggg) );
            }
           
        }

        if(!flag)
        {
        cout<<"INFINITY"<<endl;
        }
        else
        {
            sort(ans.begin(), ans.end() );
            cout<<ans.front()<<endl;
            ans.clear() ;
            vec.clear() ;
        }


    }
    return 0;
}
