#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

const int V_MAX = 20001;
vector<vector<int>> adj;
bool vst[V_MAX][2];

void dfs(int here, int cnt) {
	vst[here][cnt] = true;
	for(int nxt: adj[here]) {
		if(!vst[nxt][cnt^1]) dfs(nxt, cnt^1);
	}
}

void solve() {
	int v, e; cin >> v >> e;
	adj = vector(v+1, vector<int>()); // 벡터 초기화 용법 참고
	memset(vst, false, sizeof(vst));
	for(int i=0; i<e; i++) {
		int u, v; cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for(int i=1; i<=v; i++) {
		if(!(vst[i][0] || vst[i][1])) dfs(i, 0);
	}
	bool isbi = true;
	for(int i=1; i<=v; i++) {
		if(vst[i][0] + vst[i][1] == 1) continue;
		isbi = false;
	}
	if (isbi) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
    fast_io;
    int testcase; cin >> testcase;
	while(testcase--) solve(); 
    return 0;
}