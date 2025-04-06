#include <iostream>
using namespace std;
int main() {
    int a, b, x, y;
    int list[100][100] = {0};
    int sum = 0;
    for(int i=0; i<4; i++) {
        cin >> a >> b >> x >> y;
        for(int j=a; j<x; j++) {
            for(int k=b; k<y; k++) {
                if(list[j][k] == 0) {
                    list[j][k] = 1;
                    sum++;
                }
            }
        }
    }
    cout << sum << endl;
}