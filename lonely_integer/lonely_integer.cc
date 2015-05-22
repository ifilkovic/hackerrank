#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int lonelyinteger(vector <int> a) {
    int sizeA = a.size();
    int lonelyInteger = 0;

    for(int i = 0; i < sizeA; i++) {
        bool flag = false;
        for(int j = 0; j < sizeA; j++) {
            if(i != j && a[i] == a[j]) {
                flag = true;
                break;
            }
        }

        if(!flag) lonelyInteger = a[i];
    }

    return lonelyInteger;
}

int main() {
    int res;

    int _a_size;
    cin >> _a_size;
    cin.ignore (numeric_limits<streamsize>::max(), '\n');
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }

    res = lonelyinteger(_a);
    cout << res;

    return 0;
}
