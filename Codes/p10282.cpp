//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
using namespace std ;


map < string, string > mp ;
map < string, string > ::iterator it ;
int main()
{
    string str , a , b ;
    while(1)
    {
        getline(cin , str);
        if(str.length()==0)break;
        
        stringstream ss ( str );
        ss >> a >> b;
        
        //cout<<"wrong koi ?"<<endl;
        //cout<<a<<" "<<b<<endl;
        mp[b] = a ;
      str.clear() ;
    }
    string input ;
    while( cin >> input )
    {
        it = mp.find(input);
        if(it==mp.end())
        {
            cout<<"eh"<<endl;
        }else
        {
            cout<<mp[input]<<endl;
        }
    }
    return 0;


}

