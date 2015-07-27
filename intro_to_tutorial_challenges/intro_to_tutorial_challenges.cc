#include <iostream>
#include <algorithm>

using namespace std;

int binary_search(int a[], int key, int imin, int imax) {
  if(imax < imin) return -1;
  else {
    int imid = imin + (imax - imin) / 2;
    if(a[imid] > key) return binary_search(a, key, imin, imid - 1);
    else if(a[imid] < key) return binary_search(a, key, imid + 1, imax);
    else return imid;
  }
}

int main() {
  int v, n;
  cin >> v >> n;
  int ar[n];
  for(int i = 0; i < n; i++) {
    cin >> ar[i];
  }
  sort(ar, ar + n);
  cout << binary_search(ar, v, 0, n);
  return 0;
}
