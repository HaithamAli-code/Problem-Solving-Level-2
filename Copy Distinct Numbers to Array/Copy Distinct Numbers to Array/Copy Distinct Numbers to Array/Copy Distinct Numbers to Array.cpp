#include <iostream>
using namespace std;

int RandomNUmber(int from , int to)
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
	} while (number <= 0);
	return number;
}

void ReadArray(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = RandomNUmber(1, 100);
	}
}

void PrintArray(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

bool ReturnDistinctCount(int number, int Arr2[] ,int length2)
{
	for (int i = 0; i < length2; i++)
	{
	
			if (number == Arr2[i])
			{
				return true;
			}
			
		
	}
	return false;
}

void AddToArray(int Arr2[], int& length2, int number)
{
	length2++;
	Arr2[length2 -1] = number;
}

void CopyDistinct(int Arr1[], int length, int Arr2[], int& length2)
{
	for (int i = 0; i < length; i++)
	{
		if (!ReturnDistinctCount(Arr1[i], Arr2, length2))
		{
			AddToArray(Arr2, length2, Arr1[i]);
		}
	}
}

int main() {

	srand((unsigned)time(NULL));

	int Arrau1[100];
	int length = ReadNumber("\nEnter Length of Array : \n");

	ReadArray(Arrau1, length);
	PrintArray(Arrau1, length);

	int Array2[100];
	int length2 = 0;

	CopyDistinct(Arrau1, length, Array2, length2);
	cout << "\nArray of Distinct Numbers : \n";
	PrintArray(Array2, length2);
}
