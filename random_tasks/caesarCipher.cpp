#include <bits/stdc++.h>

using namespace std;

char decipher(char c, int n) {
	return  isalpha(c) ? (((toupper(c) - 'A') + (26 - n)) % 26) + 'A' : c;
}

int main() {
	string s;
	int n;
	getline(cin, s);
	cin >> n;

	for(auto c : s)
		cout << decipher(c, n);

	return 0;
}