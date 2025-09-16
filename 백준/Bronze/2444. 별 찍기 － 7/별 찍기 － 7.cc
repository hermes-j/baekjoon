#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i=1; i<=2*n-1; i++) {
		int j = abs(n-i);
		for (int k=0; k<j; k++) cout << " ";
		for (int k=0; k<(2*n-1)-2*j; k++) cout << "*";
		cout << "\n";
	}
	return 0;
}