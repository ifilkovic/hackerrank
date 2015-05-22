#include <iostream>

using namespace std;

bool isPalindrom(string in) {
    int length = in.size();

    for(int i = 0; i < length / 2; i++) {
        if(in[i] != in[length - i - 1]) {
                return false;
        }
    }

    return true;
}


int minNumOper(string in) {
    int length = in.size();
    int counter = 0;

    if(isPalindrom(in)) {
        return 0;
    }

    for(int i = 0; i < length; i++) {
        if(in[length - i - 1] < in[i]) {
            swap(in[i], in[length - i - 1]);
        }
        while(in[i] != in[length - i - 1]) {
            counter++;
            in[length - i - 1]--;

            if(isPalindrom(in)) {
                return counter;
            }

            if(in[length - i - 1] == 'a') {
                break;
            }
        }
    }

    return counter;
}

int main() {
  string input;
  int t;
  cin >> t;

  for(int i = 0; i < t; i++) {
    cin >> input;
    cout << minNumOper(input) << endl;
  }

  return 0;
}
