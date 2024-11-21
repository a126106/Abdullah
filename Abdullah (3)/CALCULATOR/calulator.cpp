#include <iostream>

using namespace std;

int main() {
	char operation;
	double num1, num2, result;
	cout << "Enter operation (+,-,*,/):";
	cin >> operation;
	cout << "Enter two numbes: ";
	cin >> num1 >> num2;
	switch (operation) {
	case '+':
		result = num1 + num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '/':
		if (num2 == 0) {
			cout << "Error : Division by zero\n";
			return 1;
		}
		result = num1 / num2;
		break;
	default:
		cout << " Invalid operation\n";
		return 1;
	}
	cout << "Result: " << result << endl;
	return 0;
}