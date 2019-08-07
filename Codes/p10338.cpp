//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;


#define ll unsigned long long int

unsigned long long  fact(unsigned long long  n)
{
    unsigned long long i,ren=1;
    for( i=1; i<=n; i++)
    {
        ren*=i;
    }
    return ren;
}

map < char, int > mp ;
map < char, int > :: iterator it ;

int main()
{
    string str ;

    int cs;

    cin >> cs ;

    for(int t = 1 ; t<=cs ; ++t)
    {


        cin >> str ;
        ll len = str.length() ;
        ll res = fact(len);

        for(int i =0; i<str.length(); ++i)
        {
            mp[ str[i] ]++ ;
        }
      
        bool flag = false ;
        for(it = mp.begin() ; it!=mp.end() ; ++it)
        {
            if(it->second >1)
            {
               res = res/fact(it->second) ;
               
            }
        }
        cout<< "Data set "<<t<<": ";
       cout<< res <<endl;
        str.clear() ;
        mp.clear();
    }
    return 0;
}

