
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,M,A,G,R,T,I,count,test;
    char ch[666];

    scanf("%d",&test);

    for(j=1; j<=test; ++j)
    {
        A=0;
        M=0;
        R=0;
        G=0;
        T=0;
        I=0;

        scanf("%s",ch);

        for(i=0; ch[i]; ++i)
        {
            if(ch[i]>= 'A' && ch[i]<='Z')
            {
                if(ch[i]=='M') M++;
                else if(ch[i]=='A')A++;
                else if(ch[i]=='R')R++;
                else if(ch[i]=='G')G++;
                else if(ch[i]=='T')T++;
                else if (ch[i]=='I')I++;
            }
        }
        count=0;
        //printf(" M: %d\n A: %d\n R: %d\n G: %d\n T: %d\n I: %d\n",M,A,R,G,T,I);
        while (M!=0 && A!=0 && R!=0 && G!=0 && T!=0 && I!=0)
        {
            if(A>=3 && M>=1 && R>=2 && G>=1 && T>=1 && I>=1)
            {
                count++;
            }
            A=A-3;
            M=M-1;
            R=R-2;
            G=G-1;
            T=T-1;
            I=I-1;
        }
        printf("%d\n",count);
    }
    return 0;
}

