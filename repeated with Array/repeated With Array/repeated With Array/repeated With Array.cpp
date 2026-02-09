#include <iostream>
using namespace std;

int readNumber(string messag) {
	int number;
	do
	{
		cout << messag << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}

void ReadArray(int Array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "[" << i + 1 << "] " << "enter number : ";
		cin >> Array[i];
	}
}

int checkRepeat(int Array[] , int length , int check)
{
	int counter = 0;
	for (int i = 0; i < length; i++)
	{
		if (Array[i] == check)
		{
			counter++;
		}
	}
	return counter;
}

void PrintArray(int Array[], int length)
{
	cout << "\nOriginal Array : ";
	for (int i = 0; i < length; i++)
	{
		cout << Array[i] << " ";
	}
}

int main() 
{
	int Array[100];
	int length = readNumber("Enter Length The Arrrey : \n");

	ReadArray(Array, length);
	int Check = readNumber("\nEnter the number you want to check : \n");

	PrintArray(Array, length);
	cout<<"\n\n" << Check << " is repeated " << checkRepeat(Array, length, Check) << " time(s) \n";


}
