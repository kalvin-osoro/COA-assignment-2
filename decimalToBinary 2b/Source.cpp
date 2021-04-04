
#include<iostream>
#include<random>
#include<iomanip>
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
		cout << "enter 1 to convert decimal to binary 0 to exit\n";
		cin >> val;
		cout << endl;

		if (val != 1) {
			break;
		}

	}

	system("pause");
	int main();

	return 0;
}