#include <iostream>
using namespace std;

int main2801() {
	double* pvalue = NULL; // Pointer initialized with null
	pvalue = new double;   // Request memory for the variable

	*pvalue = 29494.99;     // Store value at allocated address
	cout << "Value of pvalue : " << *pvalue << endl;

	delete pvalue;         // free up the memory.
	system("pause");
	return 0;
}