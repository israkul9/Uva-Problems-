///Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
using namespace std;


multiset<int>ms;
set<int>s;

int  main()
{
    int n,temp,i,ck,x,a,b;

    while (scanf("%d%d",&a,&b)!=EOF)
    {
        ck=0;

        for(x=a; x<=b; x++)
        {
            n=x;

            while(n)
            {
                temp = n%10;

                s.insert(temp);
                ms.insert(temp);

                n=n/10;
            }

            if( ms.size()==s.size() )
            {
                ck++;
            }

            ms.clear();
            s.clear();

        }
        printf("%d\n",ck);
    }
    return 0;
}

