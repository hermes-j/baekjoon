#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n;
vector<int> numbers; // 사람들이 가진 카드 숫자
int cards[1000002] = {0,}; // 해당 숫자 카드를 가진 사람이 있는가
int score[1000002] = {0,}; // 점수 배열

int main() {
    cin.tie(NULL); ios_base::sync_with_stdio(false);
	// input
	cin >> n;
	for(int i=0; i<n; i++) {
		int temp;
		cin >> temp;
		numbers.push_back(temp);
		cards[temp] = 1;
	}
	// solve
	for(int i=0; i<n; i++) {
		for(int j=numbers[i]*2; j<1000002; j+=numbers[i]) {
			if(cards[j] == 1) {
				score[j]--;
				score[numbers[i]]++;
			}
		}
	}
	// output
	for(int i=0; i<n; i++) {
		cout << score[numbers[i]] << " ";
	}
    return 0;
} 