#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;

  int n;
  for(int i = 0; i < t; i++) {
    cin >> n;
    string str = to_string(n);
    int len = (int) str.size();
    int cnt = 0;
    for(int j = 0; j < len; j++) {
      int d = str[j] - '0';
      if(d != 0 && n % d == 0) {
        cnt++;
      }
    }
    cout << cnt << endl;
  }

  return 0;
}
