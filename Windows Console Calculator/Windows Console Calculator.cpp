// Windows Console Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"
using namespace std;

int main() {
	Calculator calc;
	double x, y, result;
	char operation;

	cout << "Please enter a number: ";
	cin >> x;
	cout << "Enter opertaion to perform: ";
	cin >> operation;
	cout << "Enter the second number: ";
	cin >> y;

	try {
		switch (operation) {
		case '+':
			result = calc.addition(x, y);
			break;
		case '-':
			result = calc.subtraction(x, y);
			break;
		case '*':
			result = calc.multiplication(x, y);
			break;
		case '/':
			result = calc.division(x, y);
			break;
		default:
			std::cout << "Invalid operator!" << std::endl;
			return 1;
		}
		cout << "Result: " << result << std::endl;
	}
	catch (const char* msg) {
		cerr << msg << endl;
	}
	return 0;
}
