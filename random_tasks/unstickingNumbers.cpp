#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;

	cin >> s;

	int n = s.length() / 2;
	bool status;
	vector<string> ans;

	for (int i = 1; i <= n; i++) {
		ans.clear();
		string t = s.substr(0, i);
		ans.push_back(t);

		string next = to_string(stoi(t) + 1);
		int offset = next.length();

		status = true;
		for (int j = i; j < s.length(); j += offset)
		{
			offset = next.length();
			string check = s.substr(j, offset);

			if(next != check) {
				status = false;
				break;
			}
			else {
				ans.push_back(check);
				next = to_string(stoi(next) + 1);
			}
		}

		if(status)
			break;
	}

	if(!status) {
		cout << "IMPOSSIBLE";
	}
	else {
		for(auto c : ans) {
			cout << c << ", ";
		}
	}
}