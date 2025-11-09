#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	cout << fixed; cout.precision(6);
	string subj;
	float credit, total_credit = 0;
	string grade;
	float sum, result;
	map<string, float> m = {
		{"A+",4.5}, {"A0",4.0}, {"B+",3.5}, {"B0",3.0},
		{"C+",2.5}, {"C0",2.0}, {"D+",1.5}, {"D0",1.0},
		{"F",0.0}
	};
	for (int i=0; i<20; i++) {
		cin >> subj >> credit >> grade;
		if (grade != "P") {
			sum += credit * m[grade];
			total_credit += credit;
		}
	}
	result = sum / total_credit;
	cout << result;
	return 0;
}