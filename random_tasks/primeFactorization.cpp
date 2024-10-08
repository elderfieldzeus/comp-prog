#include <bits/stdc++.h>

using namespace std;

int main() {
	int x;
	cin >> x;

	vector<int> factors;

	int div = 2;

	while(x > 1) {
		if (x % div == 0)
		{
			x /= div;
			factors.push_back(div);
		}
		else {
			bool isPrime = false;

			while(!isPrime && div < x) {
				div++;

				isPrime = true;
				for (int i = div - 1; i > 1 && isPrime; i--)
				{
					if(div % i == 0)
						isPrime = false;
				}
			}
		}
	}

	for(auto a : factors)
		cout << a << " ";
}