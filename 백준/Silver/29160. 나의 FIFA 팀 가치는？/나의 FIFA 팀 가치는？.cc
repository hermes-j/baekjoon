#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    fast_io;
    int n, k; cin >> n >> k;
	priority_queue<int> pq[12];
	while(n--) {
		int p, w; cin >> p >> w;
		pq[p].push(w);
	}
	while(k--) {
		for(int i=1; i<=11; i++) { // 포지션 번호별로
			if(pq[i].empty()) continue;
			int w2 = pq[i].top();
			pq[i].pop();
			pq[i].push(w2 - 1);
		}
	}
	int res = 0;
	for(int i=1; i<=11; i++) {
		if(pq[i].empty()) continue;
		int temp = pq[i].top();
		res += temp;
	}
	cout << res;
    return 0;
} 