#include <iostream>
using namespace std;

int ReadNumber(string messag) {
	int number;
	cout << messag;
	cin >> number;
	return number;
}
int NumberRepeat(int number , int repeat) {
	int Remainder = 0;
	int counter = 0;
	while (number > 0) {
		Remainder = number % 10;
		number = number / 10;
		if (Remainder == repeat)
		{
			counter++;
		}
	}
	return counter;
}

int main()
{
	int number = ReadNumber("enter the number : ");
	int RepeatNumber = ReadNumber("The required number is checked to see how often it is repeated :");
	cout << "This number " << RepeatNumber << " is repeated " << NumberRepeat(number, RepeatNumber) <<"times";
}