#include <cstdio>
#include <map>
#include <vector>
using namespace std;

vector<int> order;
map<int, int> freq;

int main() {
	int n;

	while (scanf("%d", &n) != EOF) {
		if (freq.count(n) == 0) {
			freq[n] = 1;
			order.push_back(n);
		} else
			freq[n] = freq[n] + 1;
	}

	for(int i=0;i<(int)order.size();i++){
		printf("%d %d\n",order[i], freq[order[i]]);
	}

	return 0;
}

///





//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
using namespace std;

vector< int > vec;
map < int, int > mp;
map < int, int > :: iterator it;
int main()
{

    string str;

    while (getline( cin, str ))
    {
        stringstream s (str);
        int num ;
        while(s >> num)
        {
            vec.push_back(num);
            mp[num]++;
        }


        for(int i = 0 ; i!=vec.size() ; ++i)
        {
            it = mp.find(vec.at(i));
            if(it!=mp.end())
            {
                cout<<it->first<<" "<<it->second<<endl;
                mp.erase(it);
            }
        }
        vec.clear();
        mp.clear();
    }

    return 0;
}

