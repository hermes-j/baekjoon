#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int charlen(char c) {
	int sum = 0;
	int num = int(c);
	while(num) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

int main() {
    fast_io;
	string s; cin >> s;
	for(char c : s) {
		int loop = charlen(c);
		while(loop--) {
			cout << c;
		}
		cout << "\n";
	}
    return 0;
}