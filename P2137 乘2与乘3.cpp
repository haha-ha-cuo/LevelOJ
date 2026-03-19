#include<iostream>

using namespace std;
int j = 0;

void func(int n, int m) {
	if (n == m) {
		j = 1;
		return;
	}
	else if (n > m) {
		return;
	}
	func(n * 2, m);
	func(n * 3, m);
}

int main() {
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int n, m;
		cin >> n >> m;
		func(n, m);
		if (j == 1) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
		j = 0;
	}
	return 0;
}
