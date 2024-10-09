#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cout << "Enter number of ids: ";
	cin >> n;

	map<int, int> m;

	cout << "Student IDs: ";
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;

		if(m.find(temp) == m.end()) {
			m.insert({temp, 1});
		}
		else {
			m[temp]++;
		}
	}

	vector<pair<int, int>> v;

	int affected = 0;

	for (auto l : m) {
		if(l.second > 1) {
			v.push_back(l);
			affected += l.second;
		}
	}

	if(affected == 0) {
		cout << "No duplicates\n";
	}
	else {
		sort(v.begin(), v.end(), [](auto a, auto b) {
			if(a.second == b.second) {
				return a.first < b.first;
			}

			return a.second > b.second;
		});

		cout << "\nDuplicate students: ";

		for (int i = 0; i < v.size(); i++) {
			cout << v[i].first;

			if(i < v.size() - 1)
				cout << ", ";
		}

		cout << "\nAffected students: " << affected;
	}
}