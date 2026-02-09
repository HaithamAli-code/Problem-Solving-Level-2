#include<iostream>
using namespace std;

int Read_Number(string messag)
{
	int number;
	do
	{
		cout << messag;
		cin >> number;
	} while (number <= 0);
	return number;
}

int Random_Number(int from , int to)
{
	return rand() % (to - from + 1) + from;
}

void FIll_Array(int Array[] , int length)
{
	for (int i = 0; i < length; i++)
	{
		Array[i] = Random_Number(1, 100);
	}
}

void Print_Array(int Array[] , int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << Array[i] << " ";
	}
}

int Odd_number_Count(int Array[] , int length)
{
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (Array[i] % 2 == 1)
		{
			count++;
		}
	}
	return count;
}
int main() 
{
	srand((unsigned)time(NULL));

	int Array[100];
	int length = Read_Number("\nEnter length of array: \n");

	FIll_Array(Array, length);
	Print_Array(Array, length);

	int Odd = Odd_number_Count(Array, length);
	cout << "\nCount of odd numbers in array = " << Odd << endl;
}