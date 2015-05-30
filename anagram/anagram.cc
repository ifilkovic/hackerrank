#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;
  string s;
  for(int i = 0; i < t; i++) {
    cin >> s;
    int sLen = s.size();
    if(sLen % 2 == 0) {
      string a, b, c;
      int mid = sLen / 2;
      a = s.substr(0, mid);
      b = s.substr(mid, string::npos);
      sort(a.begin(), a.end());
      sort(b.begin(), b.end());
      set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(c));
      int d = abs((int) c.size() - (int) a.size());
      cout << d << endl;
    }
    else {
      cout << -1 << endl;
    }
  }
  return 0;
}
