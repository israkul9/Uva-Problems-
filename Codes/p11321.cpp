//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std ;


int32_t n, m, val;
set < int32_t > st ;


set < int32_t > :: iterator it ;


struct data
{
    int32_t num ;
    int32_t key ;

};
bool compare_(data e1, data e2)
{
    return e1.key < e2.key ;
}
int main()
{
    while (cin >> n >> m)
    {
        if(n==0 and m==0)
        {
            cout<< n << " "<< m << "\n";
            break ;
        }
        data arr[n];
        for(int i = 0 ; i<n ; i++)
        {
            cin >> val ;
            arr[i].num = val;
            arr[i].key = val % m ;
            st.insert(val % m );
        }
        cout<< n << " "<< m << "\n";
        sort(arr, arr + n, compare_);

        vector < int32_t > odd, even ;

        for( it = st.begin() ; it != st.end() ; ++it )
        {
            for(int j = 0 ; j<n ; j++)
            {
                int d = (*it);
                if(arr[j].key== d)
                {
                    if( arr[j].num%2!=0 )
                    {
                        odd.push_back(arr[j].num);
                    }
                    else if( arr[j].num%2==0)
                    {
                        even.push_back(arr[j].num);
                    }
                }
            }
            // cout<<"------------------------------"<< '\n';
            sort(odd.begin(),odd.end());
            reverse(odd.begin(),odd.end());
            for(auto &x :odd)
                cout<< x << '\n';
            sort(even.begin(),even.end());
            for(auto &x :even)
                cout<< x << '\n';
            odd.clear();
            even.clear() ;


        }
        st.clear();
        memset(arr,false,sizeof(arr));



    }



    return 0 ;
}

