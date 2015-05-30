#include <iostream>

using namespace std;

bool isPalindrome(string s) {
  int sLen = s.size();
  int mid = sLen / 2;
  for(int i = 0; i < mid; i++) {
    if(s[i] != s[sLen - 1 - i]) return false;
  }
  return true;
}

int main() {
  int t;
  cin >> t;
  string s, sc;
  for(int i = 0; i < t; i++) {
    cin >> s;
    sc = s;
    if(isPalindrome(s)) {
      cout << -1 << endl;
      continue;
    }
    int sLen = s.size();
    int mid = sLen / 2;
    for(int j = 0; j < mid; j++) {
      if(s[j] != s[sLen - 1 - j]) {
        s.erase(s.begin() + j);
        sc.erase(sc.begin() + sLen - 1 - j);
        if(isPalindrome(s)) {
          cout << j << endl;
          break;
        }
        else if(isPalindrome(sc)) {
          cout << sLen - 1 - j << endl;
          break;
        }
      }
    }
  }
  return 0;
}
