#include <bits/stdc++.h>

using namespace std;

int main() {
    set<int> s;

    int size;

    cout << "Enter size: ";
    cin >> size;

    for(int i = 0; i < size; i++) {
        int d;

        cin >> d;

        s.insert(d);
    }

    for(set<int>::iterator i = s.begin(); i != s.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    for(int i = 0; i < 2; i++) {
        s.erase(0);
    }

    for(auto i = s.begin(); i != s.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;

}