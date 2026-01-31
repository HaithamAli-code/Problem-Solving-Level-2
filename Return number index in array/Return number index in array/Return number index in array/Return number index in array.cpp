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

int RandomNumber(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void ReadArray(int Arr[], int n) {
	for (int i = 0; i < n; i++) {
		Arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int Arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << Arr[i] << "\t";
	}
	cout << endl;
}

int ReturnIndex(int Arr[], int n, int number) {
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] == number)
			return i;
	}
	return -1;
}

void PrintPosition(int Arr[], int n, int number) {
	int position = ReturnIndex(Arr, n, number);
	if (position == -1)
	{
		cout << "\nNumber you are looking for is: " << number << endl;
		cout << "\nNumber not found in array :(\n";
	}
	else
	{
		cout << "\nNumber you are looking for is: " << number <<endl;
		cout << "\nNumber found at index: " << position << endl;
		cout << "\nNumber found at order: " << position + 1 << endl;
	}
}

int main() 
{
	int Array[100];
	int n = ReadNumber("\nEnter number of elements in array: \n");
	ReadArray(Array, n);
	cout << "\nArray elements: \n";
	PrintArray(Array, n);
	//************************************************************
	int Number = ReadNumber("\nPlease enter a number to search for? \n");
	PrintPosition(Array, n, Number);
}