/*

BISMILLAH - HIR - RAHMANIR - RAHIM

*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{

    int tst ;

    scanf("%d",&tst);
    for(int x = 1 ; x<=tst ; ++x)
    {

        double s ;
        //scanf("%lf",&s);
        cin >> s ;

        double a, b, c ;
        a = 1.0;
        b = 1.0 ;
        c = -2*s;

        double ans = -b + (sqrt(b*b- 4.0*a*c )/2.0*a);
//        cout << fixed <<  setprecision(6) << ans <<endl;
//        cout << ceil(ans) <<endl;
        double diff = ceil(ans) - ans ;
        //cout << fixed <<  setprecision(6) << diff <<endl;

        if(diff<=0.500000000)
        {
           // cout <<"======"<<endl;
           ans = ceil(ans);
            cout <<  (int)ans <<endl;
        }
        else
        {
            ans = floor(ans);
            //cout<<"^^^^^^^^"<<endl;
            cout << (int)ans <<endl;
        }
//   printf("%lf\n",ans);
    }
    return 0;
}



