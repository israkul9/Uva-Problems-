//Bismillah_hir_rahmanir_rahim



#include<bits/stdc++.h>
using namespace std;

vector< pair < string, int > > L;



int main()
{

    string str ;
    int n ;
    int cs;
    cin >> cs ;

    for(int t = 1 ; t<=cs ; ++t)
    {

        int  m = 0;
        cin.ignore();
        for(int i = 0 ; i< 10 ; ++i)
        {
            cin >> str ;

            cin >> n ;
            L.push_back( make_pair(str, n) );
            m = max(m,n);

        }
        cout<<"Case #"<<t<<":"<<endl;
        for(int i = 0; i<L.size(); ++i)
        {
            if(L.at(i).second==m)
            {
                cout<<L.at(i).first<<endl;
            }
        }
        L.clear();

    }
    return 0;
}

