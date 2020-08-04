#include<iostream>
using namespace std;

#define bug cout <<"----------" <<endl

const int maxn = 100+3;

int n;

char graph[maxn][maxn];

bool  visited[maxn][maxn];


 int dx[] = {0, 0, +1, -1};
 int dy[] = {+1, -1, 0, 0};   //4 Direction Array

 bool flag = false;

void dfs(int sx , int sy) {

	if (graph[sx][sy] == 'x') {
		flag = true;
	}

	visited[sx][sy] = true;

	for (int i = 0; i < 4; i++) {
		int  nx = dx[i] + sx;
		int ny = dy[i] + sy;

		if (nx >= 0 and nx < n and ny >= 0 and ny < n) {
			if ( (graph[nx][ny] == 'x' or graph[nx][ny]=='@')

				and visited[nx][ny] == false) {
				dfs(nx, ny);

			}
		}

	}

}

int main()
{
	int test;

	cin >> test;

	for (int kase = 1; kase <= test; kase++) {

		cin >> n;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				visited[i][j] = false;
				cin >> graph[i][j];
			}
		}
		//	bug;
			//dfs(1,2);
		int ans = 0;



		//cout << ans << endl;


		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {

				if (visited[i][j] == false and (graph[i][j]=='x' or graph[i][j]=='@')  ) {
					flag = false;

					dfs(i, j);

					if (flag) {
						ans++;
						//cout << "hello world" << endl;
					}
				}

			}
		}

		cout << "Case " << kase << ": ";
		cout << ans << endl;
	}
	return 0;
}
