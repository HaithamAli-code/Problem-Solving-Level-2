#include <iostream>
using namespace std;

int ReadNumber(string messag) {
	int number;
	do
	{
		cout << messag;
		cin >> number;
	} while (number <= 0);
	return number;
}

void PrintDigits(int number) {

	int Remainder = 0; // ??????
	int sum = 0;
	while (number > 0) {
		Remainder = number % 10; // ??? ??? last number
		number = number / 10; // delete last number
		sum += Remainder;
	}
		cout << sum << endl; //print last number
}

int main()
{
	PrintDigits(ReadNumber("enter the number : "));
}
