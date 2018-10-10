#include <iostream>
using namespace std;

main() {
	
	int x = -1, sum;
	
	while (x != 0) {
		sum = 0;
		cout << "Enter number of iterations to estimate pi:\n";
		cin >> x;
		for (int i = 0; i < x; i++) {
			sum += ((-1^i)/(2*i + 1));//bug in formula, maybe power function
		}
		sum *= 4;
		cout << sum;
	}
}
