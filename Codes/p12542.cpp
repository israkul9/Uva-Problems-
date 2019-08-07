//Bismillah_hir_rahmanir_rahim



#include<bits/stdc++.h>
using namespace std;

#define Max 100000000 + 10


string str, xxx ;


int arr [ Max ] = { 0 } ;
void siv ()
{


    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 0;
    for( int i = 4 ; i<= Max ; i = i + 2)
    {
        arr[ i ] = 1 ;
    }

    for( int i = 3 ; i<=sqrt(Max) ; i = i + 2 )
    {
        if(arr[ i ]==0)
        {
            for(int j = i*i ; j<=Max ; j = j + 2*i )
            {
                arr[ j ] = 1 ;
            }
        }
    }
}



int m ;


void subString(string s, int n)
{
    m = 0 ;
    for (int i = 0; i < n; i++)
    {
        for (int len = 1; len <= n - i; len++)
        {
            xxx = s.substr(i, len) ;

            if(xxx.length()<=8)
            {

                stringstream ss (xxx);
                int val = 0;
                ss >> val ;
                if( arr[ val ]==0 && val<=1000000)
                {
                    //vec.push_back(val);
                    m = max(m,val);
                     //cout<<val<<endl;
                }
            }
        }
    }

}

int main()
{

    siv() ;

    // cout<<arr[112];

    while (cin >> str )
    {

        if(str[0]=='0' && str.length()==1)
        {
            break ;
        }
        subString(str, str.length()) ;
        //cout<<"-----"<<endl;
        cout<<m<<endl;

    }
    //sort( vec.begin() , vec.end() );

    //cout<<vec.back()<<endl;

    return 0;
}

