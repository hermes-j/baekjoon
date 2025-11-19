#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int n, c;
vector<int> houses;

bool isInstallable(int dist) {
	int cnt = 1;
	int prev = houses[0];
	for(int i=0; i<n; i++) {
		if(houses[i]-prev >= dist) {
			cnt++; // 거리가 너무 멀면 더 설치
			prev = houses[i];
		}
	}
	return cnt >= c; // c개 이상을 설치할 수 있는가 여부 
}

int binSearch() {
	int lo = 0, hi = houses[n-1]+1; // lo <= dist < hi
	while(lo+1 < hi) {
		int mid = (lo+hi)/2;
		if(isInstallable(mid)) lo = mid;
		else hi=mid;
	}
	return lo; // hi-1이어도 같을듯
}

int main() {
    fast_io;
	cin >> n >> c;
	for(int i=0; i<n; i++) {
		int x; cin >> x;
		houses.push_back(x);
	}
	sort(houses.begin(), houses.end());

	cout << binSearch();
    return 0;
}