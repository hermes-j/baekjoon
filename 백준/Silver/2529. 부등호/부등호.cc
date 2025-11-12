#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int k;
char b[9];
int used[9], ans[9];
vector<string> result;

bool validate() {
	for(int i=0; i<k; i++) {
		if (b[i] == '<') {
			if (ans[i] >= ans[i+1]) {
				return false;
			}
		} else if (b[i] == '>') {
			if (ans[i] <= ans[i+1]) {
				return false;
			}
		}
	}
	return true;
}

void backtrack(int cnt) {
	if (cnt == k+1) {
		string s = "";
		for(int i = 0; i < k+1; i++) {
			s += to_string(ans[i]);
		}
		if (validate()) result.push_back(s);
	}
	for (int i = 0; i <= 9; i++) {
		if (!used[i]) {
			used[i] = 1;
			ans[cnt] = i;
			backtrack(cnt + 1);
			used[i] = 0;
		}
	}
}

int main() {
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    cin >> k;
	for(int i=0; i<k; i++) {
		cin >> b[i];
	}
	backtrack(0);
	cout << result.at(result.size() -1) << '\n';
	cout << result.at(0) << '\n';
    return 0;
} 