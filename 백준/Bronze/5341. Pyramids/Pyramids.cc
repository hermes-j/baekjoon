#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    fast_io;
    int n; 
	while(1) {
		cin >> n;
		if(n == 0) break;
		else {
			int sum = 0;
			while(n) sum += n--;
			cout << sum << "\n";
		}
	}
    return 0;
}