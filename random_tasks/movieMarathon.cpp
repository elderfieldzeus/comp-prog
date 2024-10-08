#include <bits/stdc++.h>

using namespace std;

int main() {
    int size;
    cin >> size;

    vector<int> v(size);

    for(int i = 0; i < size; i++)
        cin >> v[i];

    int avail;
    cin >> avail;

    sort(v.begin(), v.end());

    int count = 0;
    while(count < size && avail >= v[count]) {
        avail -= v[count];
        count++;
    }

    cout << count;
}