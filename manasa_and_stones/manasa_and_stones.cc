#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

struct node {
    int value;
    int depth;
};

int main() {
    int t, n, a, b;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> a >> b;

        vector<node> nodes;
        vector<int> res;

        node root;
        root.value = 0;
        root.depth = 1;
        nodes.push_back(root);

        while(true) {
            node tempNode = nodes[0];

            if(tempNode.depth == n) break;

            node left, right;
            left.depth = tempNode.depth + 1;
            left.value = tempNode.value + a;
            right.depth = tempNode.depth + 1;
            right.value = tempNode.value + b;

            if(tempNode.depth == n - 1) res.push_back(left.value);
            if(tempNode.depth == n - 1) res.push_back(right.value);

            bool leftn = false;
            bool rightn = false;

            nodes.erase(nodes.begin());

            for(int j= 0; j < nodes.size(); j++) {
                if(nodes[j].value == left.value && nodes[j].depth == left.depth) {
                    leftn = true;
                }
                if(nodes[j].value == right.value && nodes[j].depth == right.depth) {
                    rightn = true;
                }
            }

            if(!leftn) nodes.push_back(left);
            if(!rightn) nodes.push_back(right);
        }

        sort(res.begin(), res.end());

        for(int k = 0; k < res.size(); k++) {
            if(k == 0) cout << res[k] << " "; 
            else if(res[k] != res[k - 1]) cout << res[k] << " ";
        }
        cout << endl;
    }
    return 0;
}
