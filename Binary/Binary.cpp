#include <iostream>
using namespace std;

int main()
{
	int  resultA = 5 | 6;
	cout << resultA << endl;
	cout << endl;
	//will print out the decimal value of the OR operator
	
	int resultB = 5 & 6;
	cout << resultB << endl;
	cout << endl;
	//will print out the decimal value of the AND operator

	int resultC = ~6;
	cout << resultC << endl;
	cout << endl;
	//will print out the decimal value of the NOT operator

	int resultD = 5 ^ 6;
	cout << resultD << endl;
	cout << endl;
	//will print out the decimal value of the XOR operator
	system("pause");
}
