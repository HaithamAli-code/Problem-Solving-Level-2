#include<iostream>
using namespace std;

int ReadNumber(string message)
{
	int number;
	do
	{
		cout << message;
		cin >> number;
	} while (number<= 0);
	return number;
}

int Random_Number(int from , int to)
{
	return rand() % (to - from + 1) + from;
}

void Read_Array(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = Random_Number(1, 100);
	}
}

enum IsPrime {
	NotPrime = 1,
	Prime = 2
};

IsPrime CheckPrime(int number)
{
	if (number == 1)
		return IsPrime::NotPrime;
	for (int i = 2; i < number; i++)
	{
		if(number % i == 0)
			return IsPrime::NotPrime;
	}
	return IsPrime::Prime;
}

void Print_Array(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}
}

void Add_Element(int number , int Arr2[] ,int &length2)
{
	length2++;
	Arr2[length2 - 1] = number;
}

void Copy_Prime_Numbers(int Arr[] , int Arr2[] , int length , int &length2)
{
	for (int i = 0; i < length; i++)
	{
		if (CheckPrime(Arr[i]) == IsPrime::Prime)
			Add_Element(Arr[i], Arr2, length2);
	}
}

int main() 
{
	int Arr[100];
	int length = ReadNumber("\nEnter array length (>0): \n");

	Read_Array(Arr, length);
	cout << "\nArray elements are: \n";
	Print_Array(Arr, length);

	int Array2[100];
	int length2 = 0;

	Copy_Prime_Numbers(Arr, Array2, length, length2);
	cout << "\n\nPrime Numbers Copied to New Array are: \n";
	Print_Array(Array2, length2);
}