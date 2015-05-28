#include <cmath>
#include <cstdio>
#include <vector>
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
    bool f = true;
    for(int j = 1; j < sLen; j++) {
      if(abs(s[j] - s[j - 1]) != abs(s[sLen - j] - s[sLen - 1 - j])) {
        cout << "Not Funny" << endl;
        f = false;
        break;
      }
    }
    if(f) cout << "Funny" << endl;
  }
  return 0;
}
