#include<iostream>
using namespace std;

int Read_Number()
{
	int number;
	cout << "Enter the number: ";
	cin >> number;
	return number;
}

float GetFractionPart(float number)
{
	return number - (int)number;
}

int MyRound(float &number)
{
	if (GetFractionPart(abs(number))  >= 0.5)
	{
		if (number < 0)
		{
			return int(number) + 1;
		}
		else
		{
			return int(number) + 1;
		}
	}
	else
	{
		if (number < 0)
		{
			return  (int)number;
		}
		else
		{
			return (int)number;
		}
	}
}

int main()
{
	cout << "My Round Function Test:\n";
	float number = Read_Number();
	cout << "The rounded value is: " << MyRound(number) << endl;

	cout << round(number) << endl; // For comparison with the standard round function

}