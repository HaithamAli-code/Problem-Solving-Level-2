#include<iostream>
using namespace std;

int ReadNumber(string messag)
{
	int number;
	cout << messag;
	cin >> number;
	return number;
}

int MyAbs(int &number)
{
	if (number < 0)
	{
		return number * -1;
	}
	else
	{
		return number;
	}
}

int main()
{
	int number = ReadNumber("Enter an number: ");
	cout << "The absolute value of " << number << " is " << MyAbs(number) << endl;
}