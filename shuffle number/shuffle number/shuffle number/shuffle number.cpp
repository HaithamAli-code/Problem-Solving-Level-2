#include<iostream>
using namespace std;

int ReadNumber() 
{
	int number;
	do
	{
		cout << "\nenter the length : \n";
		cin >> number;
	} while (number <= 0);
	return number;
}

void fillArrAyWithRandomNumber(int Arr[] , int length)
{
	int counter = 1;
	for (int i = 0; i < length; i++)
	{
		Arr[i] = counter;
		counter++;
	}
}

void PrintArray(int Arr[], int length) 
{

	for (int i = 0; i < length; i++)
	{
		cout << Arr[i] << " ";
	}

}

int Random(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void Swap(int &a, int &b) 
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void Shuffle(int Arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		Swap(Arr[Random(1, length) - 1], Arr[Random(1, length) - 1]);
	}
}

int main()
{
	int Arr[100];
	int length = ReadNumber();
	fillArrAyWithRandomNumber(Arr,length);
	cout << "\nArray elements before shuffle: \n";
	PrintArray(Arr, length);


	Shuffle(Arr, length);
	cout << "\nArray elements after shuffle: \n";
	PrintArray(Arr, length);

}
