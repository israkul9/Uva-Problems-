///output TLE hocche
///echarao 70 line er por may be vul ache


#include<bits/stdc++.h>
#define limit 1000000

using namespace std;


bool arr[limit];
int f=0,p,i,j,sq=sqrt(limit);
//int prm[limit];

void seive()
{
    arr[2]=0;
    for(i=4; i<=limit; i=i+2)
    {
        arr[i]=1;
    }
    for(i=3; i<=sq; i=i+2)
    {
        for( j=i*i; j<=limit; j=j+(2*i) )
        {
            arr[j]=1;
        }
    }

}


vector<int>store;
vector<int>diff;


int main()
{
    seive();


    int test;
    scanf("%d",&test);
    for(int b=1; b<=test; b++)
    {
        int num1,num2;
        scanf("%d%d",&num1,&num2);

        for(p=num1; p<=num2; p++)
        {
            if(arr[p]==0)
            {
                store.push_back(p);
            }
        }

        int sz = store.size();
        if(sz<2) printf("No jumping champion\n");
        else
        {

            for(int m=sz-1; m>0; m--)
            {
                diff.push_back(store[m]-store[m-1]);
                //diff[d] = store[m]-store[m-1];
            }

            int diff_size = diff.size();

            sort(diff.begin(),diff.end());

///number vector diff e sorted kore rekhe dilam

//
//    for(int z=0;z<diff_size;z++)
//    {
//        printf("%d ",diff[z]);
//    }
            int temp=0, tempCount, count=1;
            int popular = diff[0];

            // ck=0;
            //int h=0;

            for(int l = 0; l<diff_size; l++)
            {
                tempCount = 0;
                temp = diff[l];
                tempCount++;
                for(int m = l+1; m<diff_size; m++)
                {
                    if(diff[m] == temp)
                    {
                        tempCount++;

                        if(tempCount>count)
                        {
                            popular = temp;
                            count = tempCount;
                        }

                    }

                }

            }
            //printf("%d\n",tempCount);

            if(popular==1) printf("No jumping champion\n");
            else
                printf("The jumping champion is %d\n",popular);
            diff.clear();
            store.clear();
        }
    }
    return 0;
}

