//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
using namespace std ;


deque< int > d;

int main()
{

    int n ;

    while ( cin >> n )
    {
        if(n==0)break ;

        for(int i = 1 ; i<=n ; ++i)
        {
            d.push_back(i);

        }

        int i = 1;
        vector< int > v;
        for(  ;  ;  )
        {

            if( d.size()==1 )
                break ;
            if(i%2!=0)
            {
                int t = d.front() ;
                d.pop_front() ;
                v.push_back(t);
                i++;

            }
            else if(i%2==0)
            {
                int x = d.front() ;
                d.pop_front() ;
                d.push_back(x);
                ++i ;
            }

        }

        cout<<"Discarded cards: ";
        int ck = 1;
        for(int i = 0 ; i<v.size() ; ++i)
        {

            cout<<v.at(i);
            if(ck<v.size())
            {
                cout<<", ";
                ++ck ;
            }
        }
        cout<<endl;
        cout<<"Remaining card: "<<d.front()<<" "<<endl;;
        d.pop_front() ;
        v.clear() ;
    }

    return 0;
}

