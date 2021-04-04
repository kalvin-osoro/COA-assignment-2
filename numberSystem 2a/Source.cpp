// COA-assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;
int main()
{
	int input = 0;
	cout << "Enter 1 to print conversion table\n";
	cin >> input;
	cout << endl;

	if (input == 1) {

		cout << "Decimal\t\tBinary\t\tHexadecimal\n";
		for (int x = 0; x <= 256; ++x)
		{
			cout << dec << x << "\t\t";
			// Output binary number
			int number = x;
			cout << (number == 256 ? '1' : '0');
			int factor = 256;
			do
			{
				cout << (number < factor && number >= (factor / 2) ? '1' : '0');
				factor /= 2;
				number %= factor;
			} while (factor > 2);
			// Output hexadecimal numbers
			cout << '\t' << hex << x << endl;
		}

	}
	else {
		cout << "you did not enter the correct input\n";		
		
	}



	return 0;
}
