#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e3 + 1;
bool vst_dfs[MAX_N];
bool vst_bfs[MAX_N];
vector<int> neighbor[MAX_N];
int n, m, v;

void dfs(int v) {
	vst_dfs[v] = true;
	cout << v << ' ';
	sort(neighbor[v].begin(), neighbor[v].end());
	for (int n : neighbor[v]) {
		if (vst_dfs[n]) continue;
		dfs(n);
	}
}

void bfs(int v) {
	queue<int> q;
	vst_bfs[v] = true;
	q.push(v);
	while (!q.empty()) {
		int now = q.front();
		cout << now << ' ';
		q.pop();
		sort(neighbor[now].begin(), neighbor[now].end());
		for (int n : neighbor[now]) {
			if (vst_bfs[n]) continue;
			q.push(n);
			vst_bfs[n] = true;
		}
	}
}

int main() {
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	cin >> n >> m >> v;
	for (int i = 0; i < m; i++) {
		int u, w; cin >> u >> w;
		neighbor[u].push_back(w);
		neighbor[w].push_back(u);
	}

	dfs(v); cout << '\n';
	bfs(v);
}