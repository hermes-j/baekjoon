#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int t;
int arr[501];
int dp[501][501];
int prefixSum[501];

int solve(int start, int end) {
	if(start == end) return 0; // 합치는 비용 없음
	if(end-start == 1) return arr[start] + arr[end];
	int &res = dp[start][end];
	if (res != -1) return res;
	res = INT_MAX;
	int sum = prefixSum[end] - prefixSum[start-1];
	for(int i=start; i<end; i++) {
		res = min(res,
			solve(start, i) + sum + solve(i+1, end));
	}
	return res;
}

int main() {
    fast_io;
    cin >> t;
	while(t--) {
		memset(dp, -1, sizeof(dp));
		int k; cin >> k;
		for(int i=1; i<=k; i++) {
			cin >> arr[i];
			prefixSum[i] = prefixSum[i-1] + arr[i];
		}
		cout << solve(1, k) << '\n';
	}
    return 0;
}