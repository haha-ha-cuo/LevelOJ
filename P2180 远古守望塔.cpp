#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<long long int> v(n + 1);
	stack<int>s;
	for (int i = 1; i < n + 1; i++) {
		long long int high;
		cin >> high;
		v[i] = high;
	}

	vector<long long int> ans(n + 1);

	s.push(1);

	for (int i = 2; i < n + 1; i++) {

		while (v[i]>v[s.top()]) {
			ans[s.top()] = i;
			s.pop();
			if (s.empty()) {
				break;
			}
		}

		s.push(i);

	}

	for (int i = 1; i < n + 1; i++) {
		cout << ans[i] << ' ';
	}

	return 0;
}
