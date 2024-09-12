#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "Enter size: ";
    int size;

    cin >> size;

    queue<int> q;

    for (int i = 0; i < size; i++) {
        int d;
        cin >> d;
        q.push(d);
    }

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}