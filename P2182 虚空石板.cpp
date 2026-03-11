#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	list<char> l;
	list<char>::iterator it = l.begin();
	string init;
	cin >> init;
	if (init != "EMPTY") {
		for (char s : init) {
			l.insert(it, s);
		}
	}
	int n;
	cin >> n;
	it = l.begin();
	for (int i = 0; i < n; i++) {
		char op;
		cin >> op;
		if (op == '>') {
			if (it != l.end()) {
				it++;
			}
		}
		else if (op == '<') {
			if (it != l.begin()) {
				it--;
			}
		}
		else if (op == 'I') {
			char x;
			cin >> x;
			l.insert(it, x);

		}
		else if (op == 'D') {
			if (it != l.begin()) {
				it--;
				it = l.erase(it);
			}
		}
		else {
			return 0;
		}
	}
	it = l.begin();
	while (it != l.end()) {
		cout << *it;
		it++;
	}
	return 0;
}