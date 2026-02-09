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
	for (int i =number; i >= 1; i--)
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
