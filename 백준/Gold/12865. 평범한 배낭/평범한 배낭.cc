#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int n, k;
int weight[100001], value[100001]; // 크기 k 배열
int dp[100001][101]; // 크기 k*n 배열

int backpack(int index, int capacity) {
	if(index == n) return 0;
	int &res = dp[capacity][index];
	if(res != -1) return res;
	res = backpack(index + 1, capacity); // 안 고르고 넘어가는 경우
	if(capacity >= weight[index]) { // 물품을 넣을 수 있다면
		res = max(res, 
			value[index] + backpack(index+1, capacity-weight[index]));
	}
	return res;
}

int main() {
    fast_io;
    cin >> n >> k;
	for(int i=0; i<n; i++) {
		cin >> weight[i] >> value[i];
	}
	memset(dp, -1, sizeof(dp)); // init
	cout << backpack(0, k);
	return 0;
} 