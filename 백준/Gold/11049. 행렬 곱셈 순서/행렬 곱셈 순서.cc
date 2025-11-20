#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int n;
ll dp[501][501]; // i번째 행렬부터 j번째 행렬까지 고려할 때 최소 곱셈횟수
ll arr[501]; // 행렬이 곱셈 가능한 상태이므로 겹침 제외한 행렬 크기 배열

int solve(int s, int e) {
	if(e - s < 2) return 0; // 행렬이 두 개도 안 되니 못 곱함
	if(e - s == 2) return arr[s] * arr[s+1] * arr[e]; // 두 개뿐이니 방법은 하나뿐
	ll &res = dp[s][e];
	if (res) return res;
	res = INT_MAX; // 초기화 잊지마라
	for(int i=s+1; i<e; i++) {
		res = min(res, 
			arr[s]*arr[i]*arr[e] + solve(s, i) + solve(i, e));
	}
	return res;
}

int main() {
    fast_io;
    cin >> n;
	for(int i=0; i<n; i++) {
		cin >> arr[i] >> arr[i+1]; // 입력 받는법 참고
	}

	cout << solve(0, n);

    return 0;
} 