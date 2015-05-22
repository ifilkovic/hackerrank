#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;

  int cmap[n][n];
  for(int i = 0; i < n; i++) {
    string str;
    cin >> str;
    for(int j = 0; j < n; j++) {
      cmap[i][j] = str[j] - '0';
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i > 0 && j > 0 && i + 1 < n && j + 1 < n) {
        int c = cmap[i][j];
        int l = cmap[i][j - 1];
        int r = cmap[i][j + 1];
        int b = cmap[i + 1][j];
        int t = cmap[i - 1][j];
          if(c > l && c > r && c > b && c > t && c != 0 && b != 0 && t != 0 && l != 0 && r != 0) {
          cmap[i][j] = 0;
        }
      }
    }
  }


  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(cmap[i][j] == 0) {
        cout << "X";
      }
      else {
        cout << cmap[i][j] << "";
      }
    }
    cout << endl;
  }

  return 0;
}
