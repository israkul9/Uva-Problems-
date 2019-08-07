///TLE code


///bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>

#define MAX 200000005
using namespace std;


int i,j;
bool arr[MAX]= {0};

void siv ()
{
    arr[0]=arr[1]=1;
    arr[2]=0;
    for(i=4; i<=MAX; i=i+2)
    {
        arr[i]=1;
        ///non prime gulote 1 initialize kori
    }

    for(i=3; i<=sqrt(MAX); i=i+2)
    {
        if(arr[i]==0)
        {
            for(j=i*i; j<=MAX; j=j+(2*i))
            {
                arr[j]=1;
            }
        }
    }

//    for(p=2; p<=MAX; p++)
//    {
//        if(arr[p]==0)
//        {
//            prm[f]=p;
//            printf("%d ",prm[f]);
//            f++;
//        }
//    }

}

vector<int>PRIME;
vector<int>NON_PRIME;

int main()
{
    siv();

    int count,ck,num1,num2;
    int test;
    scanf("%d",&test);
    for(int l=1; l<=test; l++)
    {

        ck=0;
        count =0;
        scanf("%d %d",&num1,&num2);
        for(i=num1; i<=num2; i++)

        {
            if(arr[i]==0)
            {
                PRIME.push_back(i);
            }
            else
            {
                NON_PRIME.push_back(i);
            }
        }


        for(j=0; j<NON_PRIME.size(); j++)
        {
            for(i=0; i<PRIME.size(); ++i)
            {
                if(NON_PRIME[j]%PRIME[i]==0)
                {
                    count++;
                }

            }
            if(count==1)
            {
                ck++;
            }
            count = 0;
        }

        printf("%d\n",ck);

        PRIME.clear();
        NON_PRIME.clear();
    }

    return 0;
}

/*



#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 1000005;
const long long INF = 1e12 + 5;
 
bitset <N> vis;
int n, ptr, ans;
long long a[N], l, r;
 
int main() {
  for (int i = 4; i < N; i += 2) {
    vis[i] = 1;
  }
  for (int i = 3; i * i < N; i += 2) {
    if (vis[i]) continue;
    for (int j = i * i; j < N; j += i) {
      vis[j] = 1;
    }
  }
  for (int i = 2; i < N; ++i) {
    if (vis[i]) continue;
    long long pwr = i * 1LL * i;
    while (pwr < INF) {
      a[++ptr] = pwr;
      pwr *= i;
    }
  }
  sort(a + 1, a + ptr + 1);
  scanf("%d", &n);
  while (n--) {
    scanf("%lld %lld", &l, &r);
    ans = upper_bound(a + 1, a + ptr + 1, r) - lower_bound(a + 1, a + ptr + 1, l);
    printf("%d\n", ans);
  }
  return 0;
}







*/
