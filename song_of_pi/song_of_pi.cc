#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

string pi = "31415926535897932384626433833";

int main() {
  int t;
  cin >> t;
  string line, buf;
  getline(cin, buf);
  for(int i = 0; i < t; i++) {
    getline(cin, line);
    stringstream ss(line);
    int cnt = 0;
    bool f = true;
    while(ss >> buf) {
      if(buf.size() != stoi(pi.substr(cnt, 1))) {
        f = false;
        break;
      }
      cnt++;
    }

    if(f) {
      cout << "It's a pi song." << endl;
    }
    else {
      cout << "It's not a pi song." << endl;
    }
  }
  return 0;
}
