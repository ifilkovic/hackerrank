#include <iostream>

using namespace std;

int main() {

  int T;
  cin >> T;

  int N, K;
  for(int i = 0; i < T; i++) {
    cin >> N >> K;
    int elem;
    int count = 0;
    for(int j = 0; j < N; j++) {
      cin >> elem;
      if(elem <= 0) {
        count++;
      }
    }
    if(count < K) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
