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

void Print(int number) {
	for (int i = 65 + number -1; i >= 65; i--)
	{
		for (int j = 1; j <= number-(65+ number-1 - i); j++) {
			cout << (char)i;
		}
		cout << endl;
	}
}

int main() {
	Print(ReadNumber("enter the number : "));
}
