#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "Enter elements with # in between words: ";
    string words;
    
    cin >> words;
    
    auto it = find(words.begin(), words.end(), '#');
    
    while(it != words.end()) {
        *it = ' ';
        it = find(words.begin(), words.end(), '#');
    }
    
    stringstream ss(words);
    
    string temp;
    while(ss >> temp) {
        cout << temp << " ";
    }
}
