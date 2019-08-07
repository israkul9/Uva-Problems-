

//Bismillah_hir_rahmanir_rahim


/// verdict : TLE 

#include<bits/stdc++.h>
using namespace std;


vector < int > vec ;

int main()
{
    int c ;
    cin >> c ;
    for(int cs=1 ; cs<=c ; ++cs)
    {
        int a, b, n ;
        cin >> n ;
        for(int i = 1 ; i<=n ; ++i)
        {
            cin >> a >> b ;
            for(int j=1; j<=a; ++j)
            {
                vec.push_back(b);
            }
        }
        sort(vec.begin(),vec.end());
        int len = vec.size(), ans = 0, M = 0 ;
        for(int i = 0 ; i<vec.size() ; ++i)
        {
            ans = vec.at(i)*len;
            M = max(M,ans);
            len--;
        }
        cout<<"Case "<<cs<<": ";
        cout<< M <<endl;
        vec.clear() ;
    }
    return 0;
}


/// AC code :


/*





#include <bits/stdc++.h>
using namespace std;

int main() {
	int testcase, cases = 0;
	scanf("%d", &testcase);
	while (testcase--) {
		int n, a, b;
		vector<std::pair<int, int>> A;
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
			scanf("%d %d", &a, &b), A.push_back(make_pair(b, a));
		sort(A.begin(), A.end());
		
		long long ret = 0;
		long long sum = 0;
		for (int i = n-1; i >= 0; i--) {
			sum += A[i].second;
			ret = max(ret, sum * A[i].first);
		}
		printf("Case %d: %lld\n", ++cases, ret);
	}
	return 0;
}



*/
