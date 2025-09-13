#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	char a1 = {};
	int x = 0, y = 0, R = 0;
	int random = 1+ rand() % 10 ;
	cout << "paste int 1:";
	cin >> x;
	cout << "paste int 2:";
	cin >> y;
	cout << " знак (+,-,*,/,?, r) ";
	cin >> a1;
	switch (a1) {
	case '+':
		R = x + y;
		cout << R;
		break;
	case '-':
		R = x - y;
		cout << R;
		break;
	case '*':
		R = x * y;
		cout << R;
		break;
	case '/':
		if (y != 0) {
			R = x / y;
			cout << R;
		}
		else {
			cout << "деление на ноль???";
		}
		break;
	case '?':
		while (x <= 100) {
			cout << x << y << "think about it";
		}
	case 'r':
		if (random == x or random == y) {
			cout << "RIGHT!!!";
		}
		else {
			cout << "Nah...";
		}
		cout << random;
	
	}
	return 0;

}
