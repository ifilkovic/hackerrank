#include <iostream>
#include <sstream>

using namespace std;

int main() {
  int t, n;
  cin >> t;

  for(int i = 0; i < t; i++) {
    cin >> n;

    if(n == 1 || n == 2 || n == 4 || n == 7) {
      cout << -1 << endl;
      continue;
    }

    stringstream ss;
    if(n % 3 == 0) {
      for(int j = 0; j < n / 3; j++) {
        ss << "555";
      }
      cout << ss.str() << endl;
      continue;
    }

    if((n - 8) % 3 == 0) {
      for(int j = 0; j < n - 5; j++) {
        ss << "5";
      }
      ss <<  "33333";
      cout << ss.str() << endl;
      continue;
    }

    if((n - 13) % 3 == 0) {
      for(int j = 0; j < n - 10; j++) {
        ss << "5";
      }
      ss << "3333333333";
      cout << ss.str() << endl;
      continue;
    }

    if(n % 5 == 0) {
      for(int j = 0; j < n / 5; j++) {
        ss << "33333";
      }
      cout << ss.str() << endl;
      continue;
    }

  }
  return 0;
}
