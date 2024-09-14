#include <bits/stdc++.h>

using namespace std;

bool solution(vector<vector<int>> &l) {
    for(auto &a : l) {
        sort(a.begin(), a.end());
    }

    int i;

    for(i = 1; i < l.size() && l[i] == l[i - 1]; i++) {}


    return i == l.size();
}

int main() {
    vector<vector<int>> a = {{1,2,3}, {2, 3, 1}, {3, 1, 2}};

    if(solution(a)) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}