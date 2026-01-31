#include <iostream>
using namespace std;

enum PrimeNumber { prime = 1 , Notprime = 2 };

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

int Random(int from , int to) 
{
	return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumber(int Arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		Arr[i] = Random(1, 100);
	}
}

void printArray(int Arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << Arr[i] << " ";
	}
}

PrimeNumber check(int number)
{
	if (number == 1)
	{
		return PrimeNumber::Notprime;
	}
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
			return PrimeNumber::Notprime;
	}
	return PrimeNumber::prime;
}

void Copy_Prime_Number(int Arr[] , int Arr2[] , int length , int &length2)
{
	int counter = 0;
	for (int i = 0; i < length; i++)
	{
		if (check(Arr[i]) == PrimeNumber::prime) {
			Arr2[counter] = Arr[i];
			counter++;
		}
		
	}
	length2 = counter;
}

int main()
{
	srand((unsigned)time(NULL));

	int Arr[100];
	int length = ReadNumber("enter thee length : \n");
 
	FillArrayWithRandomNumber(Arr, length); cout << "\nArray One : \n";
	printArray(Arr, length);


	int Arr2[100];
	int length2 = 0;
	Copy_Prime_Number(Arr, Arr2, length, length2);
	cout << "\nprime number : \n";
	printArray(Arr2, length2);

}