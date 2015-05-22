#include <iostream>

using namespace std;

int main() {
    int t, n, c, m;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> c >> m;
        int answer=0;

        int m1 = n / c;
        answer += m1;

        while(m1 >= m) {
            answer += m1 / m;
            m1 = m1 / m +  m1 % m;
        }

        cout << answer << endl;
    }
    return 0;
}
