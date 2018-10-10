#include <iostream>
using namespace std;

int main() {
	int r = -1, c = -1;
	while (r != 0 && c != 0) {
		cout << "Enter number of rows, then columns:\n";
		cin >> r;
		cin >> c;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cout << "X.";
			}
			cout << endl;
		}
	}
}
