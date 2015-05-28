#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  map<char, int> stones;
  for(int i = 0; i < n; i++) {
    cin >> s;
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    int sLen = s.size();
    for(int j = 1; j < sLen; j++) {
      if(s[j - 1] != s[j]) {
        stones[s[j - 1]]++;
      }
    }

    if(s[sLen - 1] != s[sLen - 2]) stones[s[sLen - 1]]++;
  }

  int gemstones = 0;
  for(int i = 0; i < stones.size(); i++) {
    if(stones[i] == n) {
      gemstones++;
    }
  }

  cout << gemstones;

  return 0;
}
