#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n, m;
int used[9], ans[9];

void backtrack(int idx, int cnt) {
	if (cnt == m) {
		for(int i = 0; i < m; i++) {
			cout << ans[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = idx+1; i <= n; i++) {
		if (!used[i]) {
			used[i] = 1;
			ans[cnt] = i;
			backtrack(i, cnt + 1);
			used[i] = 0;
		}
	}
}

int main() {
    cin.tie(NULL); ios_base::sync_with_stdio(false);
	cin >> n >> m;
	backtrack(0, 0);
    return 0;
} 