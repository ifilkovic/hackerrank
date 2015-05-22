#include <iostream>

using namespace std;

int maxXor(int l, int r) {
    int max = 0;

    for(int i = l; i <= r; i++) {
        for(int j = l; j <= r; j++) {
            if((i ^ j) > max) {
                max = i ^ j;
            }
        }
    }
    return max;
}

int main() {
    int res;
    int _l;
    cin >> _l;

    int _r;
    cin >> _r;

    res = maxXor(_l, _r);
    cout << res;

    return 0;
}
