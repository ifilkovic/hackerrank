#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int cnt = 0;
        cin >> a >> b;
        for(int j = a; j <= b; j++) {
          double sqrt_j = sqrt(j);
          if(floor(sqrt_j) == sqrt_j) {
                cnt++;
                j += 2 * sqrt_j;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
