#include <iostream>
#include <set>
#include <locale>

using namespace std;

int main() {
  string s;
  locale loc;
  getline(cin, s);
  int sLen = s.size();
  set<char> alphabet;
  for(int i = 0; i < sLen; i++) {
    alphabet.insert(tolower(s[i], loc));
  }
  if(alphabet.size() == 27) cout << "pangram";
  else cout << "not pangram";

  return 0;
}
