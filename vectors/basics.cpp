#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v;
    int size;

    cout << "Enter size: ";
    cin >> size;

    for(int i = 0; i < size; i++) {
        int a;

        cin >> a;
        
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    // display 
    for(int i = 0; i < size; i++) {
        cout << v[i] << " ";
    }
    cout << endl;


    // pop like stack
    for(int j = 0; j < 2; j++){
        v.pop_back();
    }

    // iterator is a pointer
    vector<int>::iterator it = v.begin();

    // while iterator address is not equal to end address
    while(it != v.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl; // endl == \n

    return 0;
}