#include<iostream>
using namespace std;

int RandomNumber(int from , int to)
{
	return rand() % (to - from + 1) + from;
}


int ReadNumber(string messag) 
{
	int number;
	do
	{
		cout << messag;
		cin >> number;
	} while (number <=0);
	return number;
}


void Read_Array(int Array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		Array[i] = RandomNumber(1, 100);
	}
}


void Add_Number_In_Array(int Array, int Array2[], int& length)
{
	length++;
	Array2[length - 1] = Array;
}


void Copy_Array(int Array[] , int Array2[] ,int length , int &length2)
{
	for (int i = 0; i < length; i++)
	{
		Add_Number_In_Array(Array[i], Array2, length2);
	}
}

void Print_Array(int Array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << Array[i] << " ";
	}
}


int main() 
{
	srand((unsigned)time(NULL));
	int Array[100];
	int length = ReadNumber("\nEnter length of array: \n");

	Read_Array(Array, length);
	cout << "\nArray: \n";
	Print_Array(Array, length);

	int Array_Copy[100];
	int length2 = 0;

	Copy_Array(Array, Array_Copy, length, length2);
	cout << "\nArray Copy: \n";
	Print_Array(Array_Copy, length2);


}