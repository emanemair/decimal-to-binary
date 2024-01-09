#include<iostream>
#include"dBin.h"
using namespace std; 




void decToBin(int num, int base) {
	if (num > 0) {
		decToBin(num / base, base); 
		cout << num % base; 
	}
}