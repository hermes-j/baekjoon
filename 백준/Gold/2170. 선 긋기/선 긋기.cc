#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

struct Line {
	ll start, end;
};

int main() {
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    ll n, s, e, sum=0;
	cin >> n;
	vector<Line> lines(n);
	for(int i=0; i<n; i++){
		cin >> lines[i].start >> lines[i].end;
	}
	sort(lines.begin(), lines.end(), [](Line a, Line b){
		if(a.start == b.start) return a.end < b.end;
		return a.start < b.start;
	});
	s = lines[0].start;
	e = lines[0].end;
	for(int i=1; i<n; i++){
		if(lines[i].start <= e){
			e = max(e, lines[i].end);
		}
		else{
			sum += e - s;
			s = lines[i].start;
			e = lines[i].end;
		}
	}
	sum += e - s;
	cout << sum;	
    return 0;
} 