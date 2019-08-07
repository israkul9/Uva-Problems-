#include<bits/stdc++.h>
using namespace std;

int main()
{
    int box[130],n,i,sum,avg,j,result,t=1;
    while (1)
    {
        scanf("%d",&n);
        if(n==0)break;
        sum=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&box[i]);
            sum = sum + box[i];
        }
        avg = (sum/n);
        j=0;
        result=0;
        for(i=0; i<n; i++)
        {
            if(box[i] > avg)
            {
                box[j]=(box[i]-(avg));
                j++;
            }
        }
        for(i=0; i<j; i++)
        {
            result=result + box[i];
        }
        printf("Set #%d\n",t);
        printf("The minimum number of moves is %d.\n\n",result);
        t++;
    }
    return 0;
}
