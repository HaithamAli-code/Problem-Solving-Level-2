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


int checkPerfectNumber(int number) {
	int sum = 0;
	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			sum += i;
		}
	}
	return sum;
}

void PrintNumber(int number) {

	if (checkPerfectNumber(number) == number)
	{
		cout << "this number is perfect ==> " << number<< ".";
	}
	else
	{
		cout << "this number is not perfect ==> " << number << ".";
	}
}

int main() {

	PrintNumber(ReadNumber("enter the number: "));

	return 0;
}
