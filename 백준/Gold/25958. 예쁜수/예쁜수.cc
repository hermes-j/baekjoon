#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

ll m, k;
int pretty[5001]; // 예쁜수 여부 미리 저장
ll dp[5001];

int main() {
    fast_io;
    cin >> m >> k;

	for(int i=1; i<5001; i++) {
		int sum = 0, temp = i;
		while(temp/10) {
			sum+=temp%10;
			temp/=10;
		}
		sum += temp; // 마지막 자리 더함
		if(i%sum == 0) pretty[i] = 1;
	}
	dp[0] = 1;
	for(int i=0; i<=m; i++) {
		if(pretty[i]) { // i가 예쁜수라면,
			for(int j=i; j<=m; j++) {
				dp[j] += dp[j-i]; // 그 i를 이용해 j를 만들 수 있는 방법을 추가
				dp[j] %= k; // 미리미리 나머지 구하기
			}
		}
	}

	cout << dp[m];
    return 0;
} 