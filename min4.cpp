#include <iostream>
using namespace std;

int main(){//return ints dont work
	int a, b, c, d;
	cout << "Enter 4 numbers:" << endl;
	cin >> a >> b >> c >> d;
	if(a<b && a<c && a<d)
		cout << a;
	else if(b<a && b<c && b<d)
		cout << b;
	else if(c<a && c<b && c<d)
		cout << c;
	else
		cout << d;
	cout << endl;
}
