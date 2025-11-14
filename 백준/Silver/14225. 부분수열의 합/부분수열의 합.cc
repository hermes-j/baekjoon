#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n;
int s[20];
int arr[2000002] = {0,};

void dfs(int cnt, int sum) {
	arr[sum] = 1;
	if (cnt == n) return;
	dfs(cnt+1, sum);
	dfs(cnt+1, sum + s[cnt]);
}

int main() {
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    
	cin >> n;
	for(auto& x : s) {
		cin >> x;
	}
	dfs(0, 0);
	for(int i=1; i<=2000001; i++) {
		if(arr[i] == 0) {
			cout << i << '\n';
			break;
		}
	}
    return 0;
} 