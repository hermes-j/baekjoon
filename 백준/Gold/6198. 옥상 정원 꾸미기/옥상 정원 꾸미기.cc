#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

class Building {
	public:
		int index, height;
		Building(int index, int height) : index(index), height(height) {}
};

int main() {
	fast_io;

	int n;
	ll count = 0;
	vector<Building> stk;

	cin >> n;
	for(int i=1; i<=n; i++) {
		int temp; cin >> temp;
		while(!stk.empty() && stk.back().height <= temp) {
			stk.pop_back();
		}
		for(auto& b : stk) {
			count++;
		}
		stk.emplace_back(i, temp); // emplace_back 할거면 class에 생성자 만들어라
	}

	cout << count << " ";
	return 0;
} 