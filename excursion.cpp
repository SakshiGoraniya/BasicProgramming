#include <iostream>
using namespace std;
 
int main() {
    int t;
	int n, m, k, a;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m >> k;
        cout << (n/k + (n % k != 0)) + (m/k + (m % k != 0)) << endl;
    }
}