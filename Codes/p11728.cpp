
#include<bits/stdc++.h>
using namespace std;


vector<int>divisor;
vector<int>store;


int main()
{
    int n,i,j,sum,t,s,count,test=1;

    while(true)
    {
        count=0;

        scanf("%d",&s);

        if(s==0)
        {
            return 0;
        }

        for(t=1; t<=s; t++)
        {
            //scanf("%d",&n);
            n=t;
            for(i=1; i*i<=n; ++i)
            {
                if(n%i==0)
                {
                    divisor.push_back(i);

                    if(i*i != n)
                    {
                        divisor.push_back(n/i);
                    }
                }
            }

            sum = 0;

            for(j=0; j<divisor.size(); ++j)
            {
                //printf("%d ",divisor[j]);
                sum = sum + divisor[j];
            }

            if(sum==s)
            {
                count++;
                store.push_back(t);
            }
            //sort(store.begin(),store.end());

            divisor.clear();
        }

        if(count==0)
        {
            printf("Case %d: -1\n",test);
        }
        else
        {
            sort(store.begin(),store.end());

            printf("Case %d: %d\n",test,store[store.size()-1]);
        }

        store.clear();
        test++;

    }
    return 0;
}

