#include <bits/stdc++.h>
typedef long long ll;
//typedef pair<int, int> pii;
using namespace std;

int n;
string s;
stack<char> stk;

bool isPS(stack<char> stk) {
	int bracketOpened = 0;
	while(!stk.empty()) {
		if(stk.top() == ')') {
			bracketOpened++;
			stk.pop();
		}
		else if (stk.top() == '(') {
			if(bracketOpened > 0) {
				bracketOpened--;
				stk.pop();
			}
			else {
				return false;
			}
		}
	}
	return bracketOpened == 0;
}

int main() {
    cin.tie(NULL); ios_base::sync_with_stdio(false);
	
	cin >> n;

	for(int i=0; i<n; i++) {
		stk = stack<char>(); // init
		cin >> s;
		for(auto c : s) {
			stk.push(c);
		}
		if(isPS(stk)) cout << "YES\n";
		else cout << "NO\n";
	}

		

    return 0;
} 