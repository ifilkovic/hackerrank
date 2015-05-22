#include <iostream>

using namespace std;

int main() {
    unsigned long long n, m, a, b, k;

    cin >> n >> m;

    unsigned long long sum = 0;

    for(unsigned long long i = 0; i < m; i++) {
        cin >> a >> b >> k;
        sum += (b - a + 1) * k;
    }

    cout << sum / n;

    return 0;
}
