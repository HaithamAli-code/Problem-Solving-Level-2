#include <iostream>
using namespace std;

int RandomNumber(int from , int to)
{
	return rand() % (to - from + 1) + from;
}

int Read_NUmber(string messag)
{
	int number;
	do
	{
		cout << messag;
		cin >> number;
	} while (number <= 0);
	return number;
}

enum EnOdd {odd = 1 , even = 2};

EnOdd Is_Odd(int number)
{
	if (number % 2 == 0)
	{
		return EnOdd::even;
	}
	else
	{
		return EnOdd::odd;
	}
}

void Read_Array(int Arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		Arr[i] = RandomNumber(1, 100);
	}
}

void Print_Array(int Arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

void Add_OddNumber(int Number , int Arr2[] , int &length2)
{
	length2++;
	Arr2[length2 - 1] = Number;
}

void Copy_Odd_Numbers(int Arr[], int length, int Arr2[], int &length2)
{
	for (int i = 0; i < length; i++)
	{
		if (Is_Odd(Arr[i]) == EnOdd::odd)
		{
		    Add_OddNumber(Arr[i], Arr2, length2);
		}
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int Array[100];
	int length = Read_NUmber("Enter Length of Array: ");

	Read_Array(Array, length);

	cout << "\nOriginal Array: \n";
	Print_Array(Array, length);

	int Array2[100];
	int length2 = 0;

	Copy_Odd_Numbers(Array, length, Array2, length2);

	cout << "\nOdd Number: \n";
	Print_Array(Array2, length2);
}
