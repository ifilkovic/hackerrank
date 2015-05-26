#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
  int h, m;
  cin >> h >> m;

  map<int, string> conMap;
  conMap[1] = "one";
  conMap[2] = "two";
  conMap[3] = "three";
  conMap[4] = "four";
  conMap[5] = "five";
  conMap[6] = "six";
  conMap[7] = "seven";
  conMap[8] = "eight";
  conMap[9] = "nine";
  conMap[10] = "ten";
  conMap[11] = "eleven";
  conMap[12] = "twelve";
  conMap[13] = "thirteen";
  conMap[14] = "fourteen";
  conMap[16] = "sixteen";
  conMap[17] = "seventeen";
  conMap[18] = "eighteen";
  conMap[19] = "nineteen";
  conMap[20] = "twenty";

  if(m == 0) {
    cout << conMap[h] << " o' clock";
  }
  else if(m == 1) {
    cout << "one minute past " << conMap[h];
  }
  else if(m == 59) {
    cout << "one minute to " << conMap[h + 1];
  }
  else if(m == 30) {
    cout << "half past " << conMap[h];
  }
  else if(m == 15) {
    cout << "quarter past " << conMap[h];
  }
  else if(m == 45) {
    cout << "quarter to " << conMap[h + 1];
  }
  else if(m == 40) {
    cout << "twenty minutes to " << conMap[h + 1];
  }
  else if(m <= 20) {
    cout << conMap[m] << " minutes past " << conMap[5];
  }
  else if(m < 30) {
    int m1 = m % 10;
    cout << "twenty " << conMap[m1] << " minutes past " << conMap[h];
  }
  else if(60 - m < 20) {
    int mr = 60 - m;
    cout << conMap[mr] << " minutes to " << conMap[h + 1];
  }
  else {
    int m1 = (60 - m) % 10;
    cout << "twenty " << conMap[m1] << " minutes to " << conMap[h + 1];
  }

  return 0;
}
