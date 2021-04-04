// C++ program to convert a decimal
// number to binary number

#include <iostream>
using namespace std;

void decToBinary(int n)
{
	// array to store binary number
	int binaryNum[32];

	// counter for binary array
	int i = 0;
	while (n > 0) {

		// storing remainder in binary array
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	// printing binary array in reverse order

	//int decimal = 0;

	//while (decimal <= 256) {
		//cout << decimal << "\t";
	//cout << "\t\t\t\t\t\t";
	for (int j = i - 1; j >= 0; j--) {
		//for (int deci = 0; deci <= 256; deci++) {
		//int binval= binaryNum[j];
		cout << binaryNum[j];
		//cout << binval;

		//}

	}
	cout << endl;
	//	decimal++;
	//}


	/*for (int j = i - 1; j >= 0; j--) {
		//for (int deci = 0; deci <= 256; deci++) {
			cout<< binaryNum[j];

		//}

	}

		cout << endl;*/



}

void decToHexa(int no)
{

	char hexaDeciNum[100];

	int i = 0;
	while (no != 0) {
		
		int temp = 0;

		temp = no % 16;

		if (temp < 10) {
			hexaDeciNum[i] = temp + 48;
			i++;
		}
		else {
			hexaDeciNum[i] = temp + 55;
			i++;
		}

		no = no / 16;
	}

	
	for (int j = i - 1; j >= 0; j--) {
		
		cout << hexaDeciNum[j];
		
	}
	cout << "\t\t";
	
}

int main()

{
	int t = 11.81;
	decToBinary(t);

	int num = 0;
	cout << "Enter 1 to generate convertion table\n";
	cin >> num;
	cout << endl;
	if (num == 1) {


		cout << "Decimal\t\t Hexadecimal\t       Binary\n" << 0 << "\t\t\t" << 0 << "\t\t";
		int n = 0;
		while (n <= 256) {
			//cout << endl;
			cout << n << "\t\t\t";
			decToHexa(n);
			decToBinary(n);


			n++;
		}

	}
	else{
		cout << "you did not input the correct number enter number again\n";
		
	}
	system("pause");
	system("cls");
	main();
	return 0;
}
