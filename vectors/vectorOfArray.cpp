#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<array<int, 3>> v = {};

    int size;

    cout << "Enter size: ";
    cin >> size;

    for(int i = 0; i < size; i++) {
        int a, b, c;

        cin >> a >> b >> c;

        v.push_back({a, b, c});
    }

    sort(v.begin(), v.end(), [](array<int, 3>&a, array<int, 3>&b) {
        int i;
        for(i = 0; i < 3 && a[i] == b[i]; i++) {}

        return (i < 3 && a[i] > b[i]) ? false : true;
    });

    cout << "Your vector of array is:\n";
    for(auto x : v) {
        cout << x[0] << " " << x[1] << " " << x[2] << endl;
    }

    return 0;
}