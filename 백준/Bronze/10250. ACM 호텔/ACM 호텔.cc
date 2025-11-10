#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

string allocateRoom(int h, int w, int n) {
	int floor = (n - 1) % h + 1;
	int roomNumber = (n - 1) / h + 1;
	char buffer[10];
	sprintf(buffer, "%02d", roomNumber);
	return to_string(floor) + string(buffer);
}

int main() {
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    int t, h, w, n;
	cin >> t;
	for(int i=0; i<t; i++) {
		cin >> h >> w >> n;
		cout << allocateRoom(h, w, n) << "\n";
	}
    return 0;
} 