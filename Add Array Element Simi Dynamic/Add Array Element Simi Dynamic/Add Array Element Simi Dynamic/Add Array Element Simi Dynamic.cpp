#include <iostream>
using namespace std;

int Read_Number()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	return number;
}

void Add_Number_In_Array( int number,int Array[], int &length_Array )
{
	length_Array++;
	Array[length_Array - 1] = number;
}

void InputUserNumbersInArray(int Array[] , int &length_Array)
{
	bool choice = true;
	do
	{
		Add_Number_In_Array(Read_Number(), Array, length_Array);
		cout << "\nDo you want to add more numbers? [0]: No, [1]:yes? \n";
		cin >> choice;
	} while (choice);
}

void Print_Array(int Array[], int length_Array)
{
	cout << "\nThe numbers you entered are: \n";
	for (int i = 0; i < length_Array; i++)
	{
		cout << Array[i] << " ";
	}

}

int main()
{
	int Array[100];
	int length_Array =0;

	InputUserNumbersInArray(Array, length_Array);
	Print_Array(Array, length_Array);
}
