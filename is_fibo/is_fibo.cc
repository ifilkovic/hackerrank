#include <iostream>
#include <map>
using namespace std;

int main() {
  int t;
  cin >> t;

  map<unsigned long long, unsigned long long> fibs = {{0, 0}, {1, 1}};
  map<unsigned long long, unsigned long long> temp;

  unsigned long long n;

  for(unsigned long long i = 2; fibs[i - 1] <= 10E10; i++) {
    auto ii = fibs.find(i);
    if(ii != fibs.end()) {
    }
    else {
      fibs[i] = fibs[i - 2] + fibs[i - 1];
      temp[fibs[i]] = 0;
    }
  }

  for(int i = 0; i < t; i++) {
    cin >> n;

    auto ii = temp.find(n);
    if(ii != temp.end()) cout << "IsFibo" << endl;
    else cout << "IsNotFibo" << endl;
  }
  return 0;
}
