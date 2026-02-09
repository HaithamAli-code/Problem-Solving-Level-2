#include<iostream>
using namespace std;

int Random_Number(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

int Read_Number(string messag) {
	int number;
	do
	{
		cout << messag;
		cin >> number;
	} while (number <= 0);
	return number;
}

void Read_Array(int Array[] , int NumberOFElements) 
{
	for (int i = 0; i < NumberOFElements; i++)
	{
		Array[i] = Random_Number(1, 100);
	}
}
bool check_Number_In_Array(int Array[], int NumberOFElements, int NumberToCheck)
{
	for (int i = 0; i < NumberOFElements; i++)
	{
		if (Array[i] == NumberToCheck)
		return true;
	}
	return false;
}
void Print_Array(int Array[], int NumberOFElements)
{
	for (int i = 0; i < NumberOFElements; i++)
	{
		cout << Array[i] << " ";
	}
}

void Print_Result(int Array[], int NumberOFElements, int NumberToCheck)
{
	bool Result = check_Number_In_Array(Array,NumberOFElements, NumberToCheck);
	if (Result)
	{
		cout << "\nNumber Found\n";
	}
	else
	{
		cout << "\nNumber Not Found\n";
	}

}

int main() {

	srand((unsigned)time(NULL));

	int Array[100];
	int NumberOFElements = Read_Number("\nEnter number of elements: \n");

	Read_Array(Array, NumberOFElements);

	cout << "\nArray Elements are: \n";
	Print_Array(Array, NumberOFElements);

	int NumberToCheck = Read_Number("\nEnter number to check: \n");
	Print_Result(Array, NumberOFElements, NumberToCheck);
}