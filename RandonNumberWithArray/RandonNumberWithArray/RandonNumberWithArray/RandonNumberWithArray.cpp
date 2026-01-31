#include<iostream>
using namespace std;

int RandomNumber(int from , int to) 
{
	return rand() % (to - from + 1) + from;
}
int readNumber() {
	int number;
	do
	{
		cout << "enter the length array : ";
		cin >> number;
	} while (number <= 0); 
	return number;
}

void FillArrayWithRandomNumber(int arr[] , int length) 
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = RandomNumber(10,100);
	}
}

void PrintArray(int arr[], int length)
{
	cout << "Array Element : ";
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
}

int main() 
{
	srand((unsigned)time(NULL));
	int Array[100];
	int length = readNumber();

	FillArrayWithRandomNumber(Array,length);
	PrintArray(Array, length);

}