#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;
  unsigned long long b, w, x, y, z, c, d, u, v;
  for(int i = 0; i <  t; i++) {
    cin >> b >> w;
    cin >> x >> y >> z;

    c = b * x;
    d = w * y;
    u = b * (y + z);
    v = w * (x + z);
    if(c > u) {
      c = u;
    }

    if(d > v) {
      d = v;
    }

    cout << c + d << endl;
  }
  return 0;
}
