#include <iostream>

using namespace std;

int main() {
  int n, t;
  cin >> n >> t;

  int widhts[n];
  int out[t];
  for(int i = 0; i < n; i++){
    cin >> widhts[i];
  }

  int a,b;
  for(int i = 0; i < t; i++) {
    cin >> a >> b;

    bool isOne = false, isTwo = false;
    for(int j = a; j <= b; j++) {
      if(widhts[j] == 1) {
        isOne = true;
        break;
      }

      if(widhts[j] == 2) {
        isTwo = true;
      }
    }

    if(isOne) {
      cout << 1 << endl;
    }
    else if(isTwo) {
      cout << 2 << endl;
    }
    else{
      cout << 3 << endl;
    }
  }

  return 0;
}
