// C++ program to convert fractional decimal
// to binary number
#include<iostream>
//#include<bits/stdc++.h>
#include<random>
#include<iomanip>
using namespace std;

// Function to convert decimal to binary upto
// k-precision after decimal point
string decimalToBinary(double num, int k_prec, string binary, double r)
{
	//double n = 72.25;
	//cout << n << "\t\t";
	//string binary = "";
	string remark = "";

	// Fetch the integral part of decimal number
	int Integral = num;

	// Fetch the fractional part decimal number
	double fractional = num - Integral;

	// Conversion of integral part to
	// binary equivalent
	while (Integral)
	{
		int rem = Integral % 2;

		// Append 0 in binary
		binary.push_back(rem + '0');

		Integral /= 2;
	}

	// Reverse string to get original binary
	// equivalent
	reverse(binary.begin(), binary.end());

	// Append point before conversion of
	// fractional part
	binary.push_back('.');

	// Conversion of fractional part to
	// binary equivalent
	//string remark;
	while (k_prec--)
	{
		// Find next bit in fraction
		//double r = 0;
		fractional *= 2;
		int fract_bit = fractional;
		//double r = fractional - fract_bit;
		r = fractional;
		//string remark;

		if (fract_bit == 1)
		{
			fractional -= fract_bit;
			binary.push_back(1 + '0');



		}
		else {
			binary.push_back(0 + '0');



		}
		//cout << "R= " << r << endl;
	/*	if (r == 1) {
			return remark = "exact";
		}
		else {
			return remark = "approximate";
		} */

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

// Driver code
int main()
{
	int val = 0;
	cout << "enter 1 to convert decimal to binary 0 to exit\n";
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
		//cout << num << setw(5) << decimalToBinary(n, k, binary, r)<<setw(5) << remark<<endl;
		//cout << n << endl;
		//cout << decimalToBinary(n, k, r) << endl;
		//cout << remark;

		//cout << remark << endl;

		//n = 6.986, k = 5;
		//cout << decimalToBinary(n, k);
		int val = 0;
		cout << "enter 1 to convert decimal to binary 0 to exit\n";
		cin >> val;
		cout << endl;

		if (val == 0) {
			break;
		}

	}


	system("pause");
	int main();

	return 0;
}
