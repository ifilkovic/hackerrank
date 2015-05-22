#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
  int c;
  while(a != 0) {
    c = a; a = b%a;  b = c;
  }
  return b;
}

int main() {
  int t, n;
  cin >> t;
  for(int i = 0; i < t; i++) {
    cin >> n;
    int a[n];

    for(int j = 0; j < n; j++) {
      cin >> a[j];
    }

    sort(a, a + n);

    int g = a[0];
    for(int j = 1; j < n; j++) {
      g = gcd(g, a[j]);
    }

    if(g == 1) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
