#include <iostream>
using namespace std;

int main()
{
	double n1, n2, result;
	char op;
	cout << "Enter the first number: \n";
	cin >> n1;
	cout << "Enter the operator: \n";
	cin >> op;
	cout << "Enter the second number: \n";
	cin >> n2;

	if (op == '+')
		cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
	else if (op == '-')
		cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
	else if (op == '*')
		cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
	else if (op == '/')
		cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
	else
		cout << "Invalid operator.";
};

