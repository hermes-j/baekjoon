#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    int n;
	cin >> n;
	int arr[n];
	for(int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	int sum = 0, tmp = 0;
	for(int i = n; i > 0; i--) {
		tmp = min(tmp+1, arr[i]);
		sum += tmp;
	}
	cout << sum;
    return 0;
}