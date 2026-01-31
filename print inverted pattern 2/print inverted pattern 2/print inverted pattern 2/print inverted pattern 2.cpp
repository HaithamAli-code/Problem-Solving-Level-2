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
	for (int i = 1; i <= number; i++)
	{
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
}

int main() {
	Print(ReadNumber("enter the number : "));
}
