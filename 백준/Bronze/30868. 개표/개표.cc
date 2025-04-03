#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> n;
        while(n>4) {
            cout << "++++ ";
            n -= 5;
        }
        while(n>0) {
            cout << "|";
            n--;
        }
        cout << endl;
    }
}