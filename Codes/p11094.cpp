#include<iostream>
using namespace std;

#define bug cout <<"-------------"<<endl

const int maxn = 22;

char grid[maxn][maxn];
int n, m;
bool visit[maxn][maxn];


int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};

int cnt = 0;



char cc;


void dfs(int sx, int sy) {
	cnt++;
	grid[sx][sy] = 'w';
	visit[sx][sy] = true;

	for (int k = 0; k < 4; k++) {

		int curx = dx[k] + sx;
		int cury = (dy[k] + sy);

		if (cury > m - 1 )cury = 0;
		if (cury < 0) cury = m - 1;


		if (curx >= 0 and curx < n  and cury >= 0 and cury < m) {
			if (!visit[curx][cury] and grid[curx][cury] ==cc ) {

					dfs(curx, cury);
			}
		}
	}

}


int main()
{

	while (cin >> n >> m) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				visit[i][j] = false;
				cin >> grid[i][j];
			}
		}


		int x1, y1;

		cin >> x1 >> y1;
		cc = grid[x1][y1];
		dfs(x1,y1);

		//bug;
		//cout << cnt << endl;


		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (grid[i][j] == cc and visit[i][j] == false) {
					cnt = 0;
					dfs(i, j);
					if (cnt > ans)ans = cnt;

					//cout << cnt << " , ";
				}
			}
		}
		cout << ans << endl;

	//	bug;
		/*

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << grid[i][j];
			}
			cout << endl;
		}
		*/
		//cout << endl;
	}


	return 0;
}
