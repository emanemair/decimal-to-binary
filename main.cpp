#include"dBin.h"
#include<iostream>
using namespace std; 


int main() {

	int decimalNum;
	int base;
	base = 2;
	cout << "Enter number in decimal: ";
	cin >> decimalNum;
	cout << endl;
	cout << "Decimal " << decimalNum << " = ";
	decToBin(decimalNum, base);
	cout << " binary" << endl;

	return 0; 
}