#include<iostream>
using namespace std;
int ReadNumber(string messag)
{
	int number;
	do {
		cout << messag;
		cin >> number;
	} while (number <= 0);
	return number;
}

int reverseNumber(int number) 
{
	int Remainder = 0;
	int number2 = 0;
	while (number > 0) {
		Remainder = number % 10;
		number = number / 10;
		number2 = number2 * 10 + Remainder;
	}
	return number2;
}

bool palindromeNumber(int number){

	int number2 = reverseNumber(number);
	if (number == number2)
	{
		return true;
	}
	return false;
}



int main() {
	bool theReturnFrom_palindromeNumber = palindromeNumber(ReadNumber("enter the number : "));
	if (theReturnFrom_palindromeNumber)
	{
		cout << "Yes , It's  A Palindrome Number.";
	}
	else
		cout << "No , It's Not  A Palindrome Number.";

}