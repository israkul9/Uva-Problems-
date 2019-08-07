#include <stdio.h>
#include <iostream>
#include <map>

using namespace std;

int main()
{
	int T, K, M, l;
	map <char, double> mymap;
	map <char, double>::iterator it;
	char c;
	string line;
	double v, total;

	scanf("%d", &T);
	while(T--)
	{
		total = 0;
		scanf("%d", &K);
		for(int i = 0; i < K; i++){
			cin >> c >> v;
			mymap[c] = v;
		}
		scanf("%d", &M);
		cin.ignore();
		for(int i = 0; i < M; i++){
			line = "";
			getline(cin, line);
			l = line.size();
			for(int j = 0; j < l; j++){
				it = mymap.find(line[j]);
				if(it != mymap.end())
					total += it->second;
			}			
		}
		total /= 100;
		printf("%0.2lf$\n", total);
		mymap.clear();
	}
	return 0;
}



///----------------

/// amar TLE code


//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;


vector< pair<char, int> > vec;

int main()
{

    int n,val;
    char tar ;



    int cs;

    cin >> cs;

    while(cs--)
    {

        cin >> n;

        for(int i=0; i<n ; ++i)
        {
            cin >> tar >> val;
            vec.push_back(make_pair(tar, val));

        }

        string str ="" ;

        string input;
        int x;

        cin >> x;

        cin.ignore() ;
        for(int i= 0 ; i<x ; ++i)
        {
            getline( cin, input );

            str.append(input);
        }


        multiset< char > ms;


        for(int i=0; i<str.length(); i++)
        {
            ms.insert( str[i] );
        }



        int sum = 0;
        for(int i = 0; i<vec.size() ; ++i)
        {
            sum = sum + (vec.at(i).second)*(ms.count(vec.at(i).first));

        }

      
        printf("%0.2f$\n", sum/100.0);
        ms.clear();
        vec.clear();

    }

    return 0;
}


