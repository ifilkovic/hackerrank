#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int digitsSum = 0, primesSum = 0, i = 2;

  string num = to_string(n);
  for(int j = 0; j < num.size(); j++) {
    digitsSum += num[j] - '0';
  }

  while(i <= n) {
    if(n % i == 0) {
      n /= i;
      string num_i = to_string(i);
      for(int j = 0; j < num_i.size(); j++) {
        primesSum += num_i[j] - '0';
      }
    }
    else {
      i++;
    }
  }

  if(digitsSum == primesSum) {
    cout << 1;
  }
  else {
    cout << 0;
  }


  return 0;
}
