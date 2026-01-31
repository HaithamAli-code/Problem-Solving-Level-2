#include < iostream>;
using namespace std;

int RandomNumber(int from, int to)
{
	return rand() % (to - from + 1) + from;
}
int readNumber(string messag)
{
	int number;
	do
	{
		cout << messag;
		cin >>number;
	} while (number <= 0);
	return number;
}

void FillArrayWithRandomNumber(int arr[] , int length)
{
	for (int  i = 0; i < length; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void CopyElement(int arr1[] , int arr2[], int length)
{
	for (int i = 0; i < length; i++)
	{
		arr2[i] = arr1[i];
	}
}

void Print(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int main() 
{
	srand((unsigned)time(NULL));
	int Array1[100];
	int Array2[100];
	int length = readNumber("enter the length : ");
	FillArrayWithRandomNumber(Array1, length);
	CopyElement(Array1, Array2, length);
	cout << "Array one : ";
	Print(Array1, length);
	cout << "Array Two : ";
	Print(Array2, length);
}
