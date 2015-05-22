#include <iostream>

using namespace std;

int main() {
    unsigned long long t, k;
    cin >> t;
    for(int i = 0; i < t; i++) {
       cin >> k;
       cout << (k / 2) * (k - k / 2) << endl;
    }
    return 0;
}
