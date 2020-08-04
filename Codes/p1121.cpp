
#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define bug cout <<"-----------------"<<endl
// two pointer technique

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



	ll n, sum;
	while (cin >> n >> sum) {

		vector <ll> arr;
		for (int i = 0; i < n; i++) {
			ll val; cin >> val;
			arr.push_back(val);
		}

		ll lo = 0, hi = 0;
		ll cur_sum = 0;
		vector <ll>ans;
		while (1) {

			if (cur_sum < sum and hi < arr.size()) {
				cur_sum += arr[hi];
				hi++;
			}
			else if (cur_sum >= sum and lo < arr.size())
			{
				ans.push_back(hi - 1 - lo + 1);

				cur_sum -= arr[lo];
				lo++;
			}
			else {
				break;
			}


		}
		if (ans.size() > 0) {
			sort(ans.begin(), ans.end());

			cout << ans.front() << endl;
			ans.clear();
		}
		else {
			cout << 0 << endl;
		}
	}

	return 0;
}
