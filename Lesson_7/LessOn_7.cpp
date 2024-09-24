#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main() {

	int a1 = 60, a2 = 60, b1 = 25, c1 = a1 - b1, c2 = a1 + b1, c3 = a1 - b1, c4 = a1 + b1, c5 = a1 * b1, r1, w1, e1, q1 = 0;

	if (c1 == c3) {
		cout << "true" << endl;
	}


	if (a1 == 3) {
		cout << "== 3" << endl;
		cin >> b1;
		cout << "b1" << endl;
	}

	if (q1 != 5) {
		cout << "!= 5" << endl;
		cin >> w1;
		cout << "w1" << endl;
		cin >> e1;
		cin >> r1;
		cout << "r1 = " << r1 << endl;
	}

	if (a1 > b1 and c2 < c1) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	if (c5 > c3 or c5 == 3) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	int i = 0, b = 5, i1 = 45, i2 = 12;

	while (i < 10 and b1 < 10) {
		i++;
		i1 *= 2;
		i2 *= 2;
		cout << i1 << endl;
		cout << i2 << endl;
		b++;
	}

}

