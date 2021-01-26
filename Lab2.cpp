#include <iostream>


using namespace std;

int main()
{
	int number1 = 0;
	float number2 = 0;
	float number3 = 0;
	float sum = 0;
	float product = 0;


	// ask to input
	cout << "Enter first number(int) :";
	cin >> number1;

	cout << "Enter second number(float) :";
	cin >> number2;

	cout << "Enter third number(float) :";
	cin >> number3;
	cout << endl;

	sum = number1 + number2 + number3;
	product = number1 * number2 * number3;


	// output result
	cout << "The Sum of inputted numbers is " << sum << endl;
	cout << "The Product of inputted numbers is " << product << endl;
	cout << "The Average of thinputtedose numbers is " << product / 3 << endl;






	return 0;
}