#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    fast_io;
    int lv, score;
	string s;
	cin >> lv >> s;
	if(s.compare("miss")==0) score = 0;
	else if(s.compare("bad")==0) score = 200;
	else if(s.compare("cool")==0) score = 400;
	else if(s.compare("great")==0) score = 600;
	else if(s.compare("perfect")==0) score = 1000;
	score *= lv;
	cout << score;
    return 0;
}