#include<iostream>
using namespace std;

int RandomNumber(int from , int to) {
	return rand() % (to - from + 1) + from;
}

int ReadNumber(string messag) {
	int number;
	do
	{
		cout << messag;
		cin >> number;
	} while (number <= 0);
	return number;
}

void FillArrayWithRandomNumber(int Arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		Arr[i] = RandomNumber(1, 100);
	}
}

void printArray(int Arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << Arr[i] << " ";
	}
}

void CopyArrayInReverseOrder(int Arr[], int Arr2[], int length)
{
	for (int i = 0; i < length; i++)
	{
		Arr2[i] = Arr[length - 1 - i];
	}
}

int main(){
	int Arr[100];
	int length = ReadNumber("\nenter the length : \n");
	
	FillArrayWithRandomNumber(Arr, length);
	cout << "\nArray 1 elements: \n";
	printArray(Arr, length);

	int Arr2[100];
	CopyArrayInReverseOrder(Arr, Arr2, length);
	cout << "\nArray 2 elements: \n";
	printArray(Arr2, length);

}