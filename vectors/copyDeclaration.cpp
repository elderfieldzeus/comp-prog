#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int>a(5);

    for(auto &i : a) {
        cout << "Element: ";
        cin >> i;
    }

    vector<int>b(a.begin(), a.end());
    // or
    vector<int>c(a);

    cout << endl;

    for(auto j : b) {
        cout << j << " ";
    }

    cout << endl;

    for(auto k : c) {
        cout << k << " ";
    }

    return 0;
}