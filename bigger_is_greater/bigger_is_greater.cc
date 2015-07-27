#include <iostream>

using namespace std;

int main() {
  int t; cin >> t;
  string s, sc;
  for(int k = 0; k < t; k++) {
    cin >> s;
    int i = s.size() - 1;
    while(i > 0 && s[i - 1] >= s[i]) i--;
    if (i <= 0) {
      cout << "no answer" << endl;
      continue;
    }
    int j = s.size() - 1;
    while(s[j] <= s[i - 1]) j--;
    swap(s[i - 1], s[j]);
    j = s.size() - 1;
    while(i < j) {
      swap(s[i], s[j]);
      i++; j--;
    }
    cout << s << endl;
  }
  return 0;
}
