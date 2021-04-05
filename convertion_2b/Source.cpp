
#include<iostream>
#include<random>
#include<iomanip>
#include<string>
using namespace std;

string decimalToBinary(double num, int k_prec, string binary, double r)
{

	string remark = "";

	// Fetch the integer part of decimal number
	int Integral = num;

	// Fetch the fractional part decimal number
	double fractional = num - Integral;

	while (Integral)
	{
		int rem = Integral % 2;

		// Append 0 in binary
		binary.push_back(rem + '0');

		Integral /= 2;
	}

	reverse(binary.begin(), binary.end());

	binary.push_back('.');

	while (k_prec--)
	{
		// Find next bit in fraction
		//double r = 0;
		fractional *= 2;
		int fract_bit = fractional;
		r = fractional;

		if (fract_bit == 1)
		{
			fractional -= fract_bit;
			binary.push_back(1 + '0');



		}
		else {
			binary.push_back(0 + '0');



		}


	}


	if (r == 0) {
		remark = "exact\n";
	}
	else {
		remark = "    approximate\n";
	}
	//return binary;
	cout << "\t\t\t" << binary << "\t\t";
	return remark;

}


int main()
{
	
	
	int choice = 0;
	cout << "Enter 1 to convert random numbers generated\n";
	cout << "Enter 2 to input decimal number to convert\n";

	cin >> choice;
	cout << endl;

	
		switch (choice)
		{
		case 1: {
			random_device rd;
			default_random_engine eng(rd());
			uniform_real_distribution<double> distr(0, 100);
			for (int i = 0; i < 30; i++) {

				double decimalNum = distr(eng);

				
				cout << "Decimal" << "\t\t\t" << "Binary" << "\t\t\t" << "Remark\n";

				cout << decimalNum << "";



				string binary = "";
				string remark = "";
				double n = decimalNum;
				int k = 5;
				double r = 0;


				cout << decimalToBinary(n, k, binary, r) << remark << endl;

				
			}
			break;
		}
		case 2: {
			int val = 0;
			cout << "enter 1 to convert decimal to binary\n";
			cout << "enter any other number to exit\n";
			cin >> val;
			cout << endl;
			while (val == 1) {



				double num = 0;
				cout << "Enter decimal fraction to convert to binary\n";
				cin >> num;
				cout << endl;

				cout << "Decimal" << "\t\t\t" << "Binary" << "\t\t\t" << "Remark\n";

				cout << num;



				string binary = "";
				string remark = "";
				double n = num;
				int k = 5;
				double r = 0;


				cout << decimalToBinary(n, k, binary, r) << remark << endl;

				int val = 0;
				cout << "enter 1 to convert decimal to binary\n";
				cout << "enter any other number to exit\n";
				cin >> val;
				cout << endl;

				if (val != 1) {
					break;
				}

			}
			cout << "enter choice\n";
			cin >> choice;
			break;
		}
		default:
			cout << "enter either 1 or 2\n";
			break;
		}

	
	return 0;
}