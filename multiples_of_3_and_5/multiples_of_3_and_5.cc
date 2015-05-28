#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
  int t;
  cin >> t;

  unsigned long long n, a, b, c = 0;
  for(int i = 0; i < t; i++) {
    cin >> n;
    unsigned long long m3 = ceil(n / 3.0) - 1;
    unsigned long long m5 = ceil(n / 5.0) - 1;
    unsigned long long m15 = ceil(n / 15.0) - 1;
    a = (3 * m3 * (m3 + 1)) / 2;
    b = (5 * m5 * (m5 + 1)) / 2;
    c = (15 * m15 * (m15 + 1)) / 2;
    cout << a + b - c << endl;
  }

  return 0;
}
