#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
	float result;
	int switch_on;

	cout << "Input variable: ";
	cin >> switch_on;

	switch (switch_on) {
	case 1: {
		double a = 0.8, b = 1.1, x = 0.1, z;

		while (x <= 2) {
			z = log(b * pow(x, 3));

			if (x < a)
			{
				result = 2.8 * pow(sin(a * x), 2) - b * pow(x, 3) * z;
				cout << "X: " << x << " If Number: 1, and result: " << result << endl;
			}
			else if ((a <= x) && (x <= pow(b,2)))
			{
				result = z * cos(pow(a * x + b, 2)) + log(z);
				cout << "X: " << x << " If Number: 2, and result: " << result << endl;
			}
			else if (x > pow(b,2))
			{
				result = exp(2.5 * a * x) + z * a * b * x;
				cout << "X: " << x << " If Number: 3, and result: " << result << endl;
			}
			x += 0.1;
		}
		break;
	}
	case 2: {
		double a = 1.3, b = 2.2, x = 0.1, z;
		
		do {
			z = log(b * x);

			if (x < a)
			{
				result = 2.8 * pow(sin(a * x), 2) - b * pow(x, 3) * z;
				cout << "X: " << x << " If Number: 1, and result: " << result << endl;
			}
			else if ((a <= x) && (x <= pow(b, 2)))
			{
				result = z * cos(pow(a * x + b, 2)) + log(z);
				cout << "X: " << x << " If Number: 2, and result: " << result << endl;
			}
			else if (x > pow(b, 2))
			{
				result = exp(2.5 * a * x) + z * a * b * x;
				cout << "X: " << x << " If Number: 3, and result: " << result << endl;
			}
			x += 0.1;
		} while (x <= 6); 
		break;
	}
	case 3: {
		double a = 1.5, b = 3.2,x, z;

		for (x = 0.1; x < 12; x += 0.1) {
			z = log(b * pow(x,2));

			if (x < a)
			{
				result = 2.8 * pow(sin(a * x), 2) - b * pow(x, 3) * z;
				cout << "X: " << x << " If Number: 1, and result: " << result << endl;
			}
			else if ((a <= x) && (x <= pow(b, 2)))
			{
				result = z * cos(pow(a * x + b, 2)) + log(z);
				cout << "X: " << x << " If Number: 2, and result: " << result << endl;
			}
			else if (x > pow(b, 2))
			{
				result = exp(2.5 * a * x) + z * a * b * x;
				cout << "X: " << x << " If Number: 3, and result: " << result << endl;
			}
		}
		break;
	}
	default:
		cout << "Not supported variable, try more.";
		break;
	}
	return 0;
}
