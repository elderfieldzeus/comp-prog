#include <bits/stdc++.h>

using namespace std;

bool isMatch(char a, char b) {
    bool ans = false;

    switch(a) {
        case '(' :
            if(b == ')') ans = true; break;
        case '[' :
            if(b == ']')
                ans = true;
            break;
        case '{' :
            if(b == '}')
                ans = true;
            break;
    }

    return ans;
}

bool isBalanced(string x) {
    stack<char> s;

    for (int i = 0; x[i] != '\0'; i++) {
        if(s.empty() || !isMatch(s.top(), x[i])) {
            s.push(x[i]);
        }
        else {
            s.pop();
        }
    }

    return s.empty();
}

int main() {
    string x;

    cin >> x;

    cout << "The string " << (isBalanced(x) ? "is" : "is not") << " balanced";

    return 0;
}