
//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int init ;
    int kase = 1 ;
    while (cin >> init and init>=0 )
    {
        int available[13], required[13];
        memset(available,false,sizeof(available));
        memset(required,false,sizeof(required));
        for(int i = 1 ; i<=12 ; i++)
        {
            cin >> available[i] ;
        }
        for(int i = 1 ; i<=12 ; i++)
        {
            cin >> required[i];
        }
        cout << "Case "<<kase<<":"<<endl;
        for(int i = 1 ; i<=12 ; i++)
        {
            if( init >= required[i] )
            {
                cout << "No problem! :D" << endl;
                init = init - required[i];
            }
            else
            {
                cout << "No problem. :(" << endl;
            }
            init += available[i];
        }
        ++kase;
    }
    return 0 ;
}

