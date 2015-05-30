#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  string a, b, c;
  cin >> a >> b;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(c));
  int d = abs((int) c.size() - (int) a.size());
  int e = abs((int) c.size() - (int) b.size());
  cout << d + e << endl;
  return 0;
}
