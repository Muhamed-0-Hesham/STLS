#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    deque<int> dq;
    while (q--) {
        string cmd;
        cin >> cmd;

        if (cmd == "push_back") {
            int x;
            cin >> x;
            dq.push_back(x);
        } else if (cmd == "push_front") {
            int x;
            cin >> x;
            dq.push_front(x);
        } else if (cmd == "pop_front") {
            dq.pop_front();
        } else if (cmd == "pop_back") {
            dq.pop_back();
        } else if (cmd == "front") {
            cout << dq.front() << "\n";
        } else if (cmd == "back") {
            cout << dq.back() << "\n";
        } else if (cmd == "print") {
            int x;
            cin >> x;
            cout << dq[x - 1] << "\n";  // 1-indexed in the problem
        }
    }
    return 0;
}