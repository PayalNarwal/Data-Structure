#include <iostream>
#include <vector>
using namespace std;

vector<int> managePages(int N, int Q, vector<pair<int, int>>& commands) {
    vector<bool> memory(N, false); 
    vector<int> result;

    for (auto& cmd : commands) {
        int type = cmd.first;
        int index = cmd.second;

        if (type == 1) {
            // Allocate
            if (!memory[index]) {
                memory[index] = true;
                result.push_back(1);
            } else {
                result.push_back(0);
            }
        } else if (type == 2) {
            // Free
            if (memory[index]) {
                memory[index] = false;
                result.push_back(1);
            } else {
                result.push_back(0);
            }
        }
    }

    return result;
}

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<pair<int, int>> commands(Q);
    for (int i = 0; i < Q; ++i) {
        cin >> commands[i].first >> commands[i].second;
    }

    vector<int> output = managePages(N, Q, commands);

    for (int res : output) {
        cout << res << " ";
    }

    return 0;
}
