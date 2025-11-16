#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int n, m;
vector<int> isStack, inputs, result;
deque<int> numbers;

int main() {
    fast_io;
    // input
	cin >> n;
	for(int i=0; i<n; i++) {
		int temp;
		cin >> temp;
		isStack.push_back(temp);
	}
	for(int i=0; i<n; i++) {
		int temp;
		cin >> temp;
		if (!isStack[i]) {
			numbers.push_back(temp);
		}
	}
	cin >> m;
	for(int i=0; i<m; i++) {
		int temp;
		cin >> temp;
		inputs.push_back(temp);
	}
	// solve
	for(auto c: inputs) {
		numbers.push_front(c);
		result.push_back(numbers.back());
		numbers.pop_back();
	}

	// output
	for(auto v : result) cout << v << " ";
    return 0;
} 