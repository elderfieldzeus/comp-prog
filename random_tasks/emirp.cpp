#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x) {
	for (int i = x - 1; i > 1; i--) {
		if(x % i == 0)
			return false;
	}

	return true;
}

int main() {
	int n;
	cin >> n;
	vector<int> ans;

	for (int i = 2; i <= n; i++) {
		string s = to_string(i);

		reverse(s.begin(), s.end());

		int rev = stoi(s);

		if(isPrime(i) == true && isPrime(rev) == true) {
			ans.push_back(i);
		}
	}

	for(auto c : ans) {
		cout << c << " ";
	}
}