#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int n;
stack<pii> stk; // {index, value}
int NGE[1000002] = {-1,};

int main() {
    cin.tie(NULL); ios_base::sync_with_stdio(false);
	cin >> n;

	// input 및 NGE 계산
	for (int i=0; i<n; i++) {
		int x; cin >> x;
		while(!stk.empty() && stk.top().second < x) {
			NGE[stk.top().first] = x;
			stk.pop();
		}
		stk.emplace(i, x);
	}

	// 남아있는 원소들은 NGE가 존재하지 않음
	while(!stk.empty()) {
		NGE[stk.top().first] = -1;
		stk.pop();
	}

	for (int i=0; i<n; i++) {
		cout << NGE[i] << " ";
	}
    return 0;
} 