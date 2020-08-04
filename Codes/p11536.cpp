
#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define bug cout <<"-----------------"<<endl


const int maxn = 1000001 + 10;

int arr[maxn];

/// slidding window technique

bool fun(int patt_freq[],int k)
{


    for (int i = 1; i <= k; i++)
    {
        if (patt_freq[i] > 0)
            continue;
        else
            return false;
    }
    return true;

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int kase;

    cin >> kase;
    int tt = 1;
    while (kase--)
    {
        memset(arr, false, sizeof arr);
        int n, m, k;
        cin >> n >> m >> k;

        arr[1] = 1;
        arr[2] = 2;
        arr[3] = 3;

        for (int i = 4; i <= n; i++)
        {

            int value = arr[i - 1] + arr[i - 2] + arr[i - 3];

            arr[i] = value % m + 1;
        }
        /*bug;
        for (int i = 1; i <= n; i++)
        	cout << arr[i] << " ";
        cout << endl;
        bug;*/



        int patt_freq[102];
        //int main_freq[102];
        int ans = INT_MAX;

        memset(patt_freq, false, sizeof patt_freq);
        //memset(main_freq, false, sizeof main_freq);


        //for (int i = 1; i <= k; i++)patt_freq[i]++;

        int lo = 1, hi = 1;


        int start = -1, end = -1;

        while (1)
        {


            if (hi <= n and !fun(patt_freq, k))
            {


                //cout << lo << " " << hi - 1 << endl;
                int cur = arr[hi];

                if (cur >= 1 and cur <= k)
                    patt_freq[cur]++;
                hi++;
            }
            else if (lo <= n and fun(patt_freq, k))
            {


                //cout << lo << " " << hi - 1 << endl;

                if (ans > hi - 1 - lo + 1)
                {
                    start = lo, end = hi - 1;
                    ans = hi - 1 - lo + 1;
                }



                int cur = arr[lo];
                if (cur >= 1 and cur <= k)
                {
                    if (patt_freq[cur] > 0)
                        patt_freq[cur]--;
                }
                lo++;


            }
            else
            {
                break;
            }



        }

        //cout << start << " " << end;
        cout << "Case " << tt << ": ";
        if (start == -1 and end == -1)
        {
            cout << "sequence nai" << endl;
        }
        else
        {
            cout << end - start + 1 << endl;
        }
        tt++;
    }
    return 0;
}

