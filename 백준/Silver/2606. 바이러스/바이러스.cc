#include <bits/stdc++.h>
using namespace std;
bool vst[101];
vector<int> neighbor[101];

void dfs(int v) {
	vst[v] = true;
	for (int n : neighbor[v]) {
		if (vst[n]) continue;
		dfs(n);
	}
}

int main() {
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int V, E; cin >> V >> E;
	int u, v;
	for (int i = 0; i < E; i++) {
		cin >> u >> v;
		neighbor[u].push_back(v);
		neighbor[v].push_back(u);
	}
	dfs(1); // 1번 컴퓨터 감염 시작
	cout << count(vst, vst+101, true)-1; // 1번 제외 감염컴퓨터 수 카운트
}