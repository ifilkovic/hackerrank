#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  int p, q;
  cin >> p >> q;
  int n, nLen, nnLen, lrLen, lLen, rLen;
  unsigned long long nn;
  string l, r, ns, nns;
  bool f = true;
  for(n = p; n <= q; n++) {
    nn = pow(n, 2);
    ns = to_string(n);
    nns = to_string(nn);

    nLen = ns.size();
    nnLen = nns.size();
    if(nnLen % 2 == 0) {
      lrLen = nnLen / 2;
      if(lrLen == nLen) {
        l = nns.substr(0, lrLen);
        r = nns.substr(lrLen, nnLen - lrLen);
        if(atoi(l.c_str()) + atoi(r.c_str()) == n) {
          cout << n << " ";
          f = false;
        }
      }
    }
    else {
      rLen = nnLen / 2 + 1;
      if(rLen == nLen) {
        l = nns.substr(0, nnLen / 2);
        r = nns.substr(nnLen / 2, rLen);
      }
      if(atoi(l.c_str()) + atoi(r.c_str()) == n) {
        cout << n << " ";
        f = false;
      }
    }

  }

  if(f) cout << "INVALID RANGE";

  return 0;
}
