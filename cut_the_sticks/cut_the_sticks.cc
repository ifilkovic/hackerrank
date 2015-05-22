#include <iostream>
#include <algorithm>

using namespace std;

int main() {

  int N;
  cin >> N;
  int stick_lengths[N];

  for(int i = 0; i < N; i++){
    cin >> stick_lengths[i];
  }

  sort(stick_lengths, stick_lengths + N);

  int count = 0;
  int out = N;
  cout << N << endl;
  for(int i = 1; i < N; i++) {
    if(stick_lengths[i - 1] != stick_lengths[i]) {
      cout << N - i << endl;
    }
  }

  return 0;
}
