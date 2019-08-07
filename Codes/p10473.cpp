///bismillah_hir_rahmanir_rahim

#include<stdio.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<long long>v;

int main()
{
    long long temp,value,t,cnt,n,sz,m,x,val;

    char ch[15],ch1[15];

    while (scanf("%s",ch)!=EOF)
    {
        if(ch[0]=='-')
        {
            return 0;
        }
        m=0;

        if(ch[0]== '0' && ch[1]=='x')
        {

            for( t=2; t<strlen(ch); t++)
            {
                if(ch[t]=='A')
                {
                    v.push_back(10);
                }
                else if(ch[t]=='B')
                {
                    v.push_back(11);
                }
                else if(ch[t]=='C')
                {
                    v.push_back(12);
                }
                else if(ch[t]=='D')
                {
                    v.push_back(13);
                }
                else if(ch[t]=='E')
                {
                    v.push_back(14);
                }
                else if(ch[t]=='F')
                {
                    v.push_back(15);
                }
                else
                {
                    v.push_back(ch[t]-48);
                }


            }
            m++;
        }
        if(m>0)
        {
            reverse(v.begin(),v.end());

            n=1;
            sz = v.size();
            x=1;
            long long  d=1,sum=0;
            while (n<=sz-1)
            {
                x=1;
                while(d<=n)
                {
                    x= x*16;

                    d++;
                }

                d=1;
                sum = sum + v[n]*x;
                n++;
            }
            printf("%lld\n",sum + v[0]);
            v.clear();

        }
        else
        {
            val = atoll(ch);
            temp = val;

            cnt=0;
            if(temp>=0)
            {
                cnt++;
            }

            while (true)
            {
                value = temp%16;
                v.push_back(value);

                if(temp/16==0)
                {
                    break;
                }
                temp = temp/16;
            }

            reverse(v.begin(),v.end());

            if(cnt>0)
            {
                printf("0x");
            }
            for( t=0; t<v.size(); t++)
            {
                if(v[t]==10)
                {
                    printf("A");
                }
                else if(v[t]==11)
                {
                    printf("B");
                }
                else if (v[t]==12)
                {
                    printf("C");
                }
                else if(v[t]==13)
                {
                    printf("D");
                }
                else if(v[t]==14)
                {
                    printf("E");
                }
                else if(v[t]==15)
                {
                    printf("F");
                }
                else
                {
                    printf("%lld",v[t]);
                }
            }
            printf("\n");
            v.clear();
        }
    }
    return 0;
}

