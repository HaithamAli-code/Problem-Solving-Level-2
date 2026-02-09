#include<iostream>
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

int reversesNumber(int number) {
	int Remainder = 0;
	int number2 = 0;
	while (number > 0) {
		Remainder = number % 10;
		number = number / 10;
		number2 = number2 * 10 + Remainder;
	}
	return number2;
}

void printNumber(int number) {
	int Remainder = 0;
	while(number>0){
		Remainder = number % 10;
		number = number / 10;
		cout << Remainder << endl;
	}
}

int main() {
	printNumber(reversesNumber(ReadNumber("entet the numebr: ")));

}