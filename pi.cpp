#include <iostream>
using namespace std;

main() {
	
	int x = 0;
	double sum;
	while (x != -1) {
		sum = 0;
		cout << "Enter the value of the parameter 'n' in the Lebiniz formula (or -1 to quit):\n";
		cin >> x;
		for (double i = 0; i < x; i++) {
			double inc = 1/(2*i + 1);
			if ((int)i%2 != 0)
				inc *= -1;
			sum += inc;
		}
		sum *= 4.0;
		cout <<(double)sum << endl;
	}
}
