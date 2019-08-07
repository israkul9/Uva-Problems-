//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;

int n1, n2,val;



int main()
{
    


    int cs ;

    cin >> cs ;
    while(cs--)
    {
        cin >> n1 >> n2 ;

        vector < int > vec1;

        multiset < int > ms1, ms2 ;

        set < int > s1, s2 ;
        set < int > ::iterator its , its2 ;

        int cnt = 0 ;

        for(int i = 0 ; i<n1 ; ++i)
        {
            cin >> val ;
            // vec1.push_back(val);
            ms1.insert(val);
            s1.insert(val);
        }


        for(int i = 0 ; i<n2; i++)
        {
            cin >> val;

            if(ms1.count(val)==0)
            {
                cnt++;
            }
            else
            {
                ms2.insert(val);
                s2.insert(val);
            }
        }


        for(its = s1.begin() , its2 = s2.begin() ; its!=s1.end() , its2!=s2.end() ; ++its,its2++)
        {
             cnt += abs(ms1.count(*its) -  ms2.count(*its));
            //vec1.push_back( ms1.count(*its));

        }

//        int x = 0 ;
//
//        for(its = s2.begin(); its2!=s2.end(); ++its)
//        {
//           
//            ++x;
//
//        }
        cout << cnt <<endl;
        vec1.clear();
        ms1.clear();
        ms2.clear();
        s1.clear();
        s2.clear();
    }
    return 0;
}

