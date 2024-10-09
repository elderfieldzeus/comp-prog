#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n, 0);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j % i == 0) {
                v[j - 1] = (!(v[j - 1]));
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(v[i] == 1)
            cout << i + 1 << " ";
    }
}