#include<iostream>
using namespace std;

int main()
{
    double h,u,d,f;
    while(cin >> h >> u >> d >> f && h != 0)
    {
        int cnt = 0;
        double ht = 0.0;
        f=(f*u)/100;
        while(true)
        {
            cnt++;
            if(u>0)
            {
                ht+=u;
                u-=f;
            }
            if(ht>h)
                break;
            ht-=d;
            if(ht<0)
                break;
        }

        if(ht<0)
            cout << "failure on day " << cnt << endl;
        else if(ht>h)
            cout << "success on day " << cnt << endl;
    }
    return 0;
}

