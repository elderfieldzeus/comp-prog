#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    unordered_map<char, int>m;

    for(int i = 0; i < s.length(); i++) {
        if(m.find(s[i]) == m.end()) {
            m[s[i]] = 1;
        }
        else {
            m[s[i]]++;
        }
    }

    vector<pair<char, int>> v;

    for(auto x : m) {
        v.push_back(x);
    }

    sort(v.begin(), v.end(), [](auto a, auto b) {
        return a.first < b.first;
    });

    for(auto [a, b] : v) {
        if(isalpha(a))
            cout << a << ": " << b << endl;
    }

    return 0;
}