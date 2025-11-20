#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

const int MAX = 1001;
int n, a[MAX], dp[MAX];
// dp[i]는 a[0]부터 a[i]까지를 포함한 LIS(Longest Increasing Subsequence)의 길이

//bottom-up
int main() {
    fast_io;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	int res = 0;
	for(int i=0; i<n; i++) {
		dp[i] = 1;
		for(int j=0; j<i; j++) {
			if(a[j] < a[i]) {
				dp[i] = max(dp[i], dp[j]+1);
			}
		}
		res = max(res, dp[i]);
	}
	cout << res;
    return 0;
}