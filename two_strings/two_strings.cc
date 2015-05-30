#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;
  string a, b;
  for(int i = 0; i < t; i++) {
    cin >> a >> b;
    string c;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(c));
    if(c.size() > 0) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}
