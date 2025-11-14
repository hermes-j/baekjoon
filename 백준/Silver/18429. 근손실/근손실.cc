#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n, k, m=0; 
int a[9], used[9] = {0,};
int result;

void backtrack(int cnt, int power) {
	if (cnt == n && power >= 0) {
		result++;
		return;
	}
	for (int i = 0; i < n; i++) {
		if (used[i]) continue;
		used[i] = 1;
		if(power+a[i]-k >= 0) backtrack(cnt + 1, power+a[i]-k);
		used[i] = 0;
	}
}

int main() {
    cin.tie(NULL); ios_base::sync_with_stdio(false);
	cin >> n >> k;
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	backtrack(0, 0);
	cout << result << '\n';
    return 0;
} 