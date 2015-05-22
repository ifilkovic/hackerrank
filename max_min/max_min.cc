#include <iostream>
#include <algorithm>

using namespace std;

int minElem(int a[], int k) {
  int min = 1000000000;

  for(int i = 0; i < k; i++) {
    if(a[i] < min) {
      min = a[i];
    }
  }
  return min;
}

int maxElem(int a[], int k) {
  int max = 0;

  for(int i = 0; i < k; i++) {
    if(a[i] > max) {
      max = a[i];
    }
  }
  return max;
}

void minMaxElem(int a[], int k, int *min, int *max) {
  for(int i = 0; i < k; i++) {
    if(*(a + i) > *max) {
      *max = a[i];
    }
    if(*(a + i) < *min) {
      *min = a[i];
    }
  }
}

int calcMinUnf(int candies[], int n, int k) {
  sort(candies, candies + n);
  int min = 1000000000;

  for(int i = 0; i < n; i++) {
    if(i + k <= n) {
      int minElem = 1000000000;
      int maxElem = 0;
      minMaxElem(candies + i, k, &minElem, &maxElem);

      if(maxElem - minElem < min) {
        min = maxElem - minElem ;
      }
    }
    }
  return min;
}

int main() {
    int N, K, unfairness;
    cin >> N >> K;
    int candies[N];
    for (int i=0; i<N; i++) {
      cin >> candies[i];
    }

    unfairness = calcMinUnf(candies, N, K);

    cout << unfairness << "\n";
    return 0;
}
