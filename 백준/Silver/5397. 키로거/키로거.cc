#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


int main() {
    fast_io;
	int n;
	char op;
	vector<char> v;
    // input
	cin >> n;
	list<char> lst;
	auto cursor = lst.end();

	for(int i=0; i<n; i++) {
		string temp;
		cin >> temp;
		for(char c: temp) v.push_back(c);
		for(char c: v) {
			switch(c) {
				case '<':
					if(cursor != lst.begin()) cursor--;
					break;
				case '>':
					if(cursor != lst.end()) cursor++;
					break;
				case '-':
					if(cursor != lst.begin()) cursor = lst.erase(prev(cursor));
					break;
				default: // 일반 문자
					lst.insert(cursor, c);
			}
		}
		for(char c: lst) cout << c;
		cout << "\n";
		lst.clear(); cursor = lst.end();
		v.clear();
	}
    return 0;
}