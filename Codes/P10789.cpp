#include<bits/stdc++.h>

#define n 100000
using namespace std;

bool arr[n];

void seive ()
{
    arr[0]=arr[1]=1;
    arr[2]=0;
    for(int i=4; i<=n; i=i+2)
    {
        arr[i]=1;
    }
    for(int i=3; i<=sqrt(n); i=i+2)
    {
        if(arr[i]==0)
        {
            for(int j=i*i; j<=n; j=j+(2*i))
            {
                arr[j]=1;
            }
        }
    }
    /*  for(int p=2;p<=100;p++)
      {
          if(arr[p]==0)
          {
              printf("%d ",p);
          }
      }
    */
}


multiset<char>ms;

set<char>s;
set<char>::iterator it;

int main()
{

    seive();

    string ch;
    int i,cnt,d;

    int test;
    scanf("%d",&test);

    for(int j=1; j<=test; ++j)
    {

        cin>>ch;

        for(i=0; i<ch.size(); i++)
        {
            ms.insert(ch[i]);
            s.insert(ch[i]);
        }
        cnt = 0;
        printf("Case %d: ",j);
        for(it=s.begin(); it!= s.end(); it++)
        {

            d = ms.count(*it);
            if(arr[d]==0)
            {
                cnt++;
                cout<<*it;
            }
        }
        if(cnt>0)
        {
            printf("\n");
        }
        else  if(cnt==0)
        {
            printf("empty\n");
        }
        ms.clear();
        s.clear();

    }
    return 0;
}

