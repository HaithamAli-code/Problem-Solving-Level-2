//#include<iostream>
//using namespace std;
//
//int Read_Number(string messag)
//{
//	int number;
//	do
//	{
//		cout << messag;
//		cin >> number;
//	} while (number <= 0);
//	return number;
//}
//
//
//void Rea_Array(int Array[] ,int length)
//{
//	for (int i = 0; i < length; i++)
//	{
//		cout << "\n[" << i + 1 << "] " << "enter the number :\n";
//			cin >> Array[i];
//	}
//}
//
//
//void Add_Element(int number , int &length2 , int Array2[])
//{
//	length2++;
//	Array2[length2 - 1] = number;
//}
//
//void Copy_Array(int Array[] , int Array_Tow[], int length , int &length2)
//{
//	for (int i = 0; i < length; i++)
//	{
//		Add_Element(Array[length-1  - i], length2, Array_Tow);
//	}
//}
//
//bool Is_Palindrome_Array(int Array[] , int Array2[], int length)
//{
//	int counter = 0;
//	for (int i = 0; i < length; i++)
//	{
//		if (Array[i] == Array2[i]) {
//			counter++;
//		}
//	}
//	return counter == length;
//}
//
//int main()
//{
//
//	int Array_One[100];
//	int length = Read_Number("enter the length : ");
//
//	cout << "\n--- Read Array ---\n";
//	Rea_Array(Array_One, length);
//
//	int Array_Two[100];
//	int length_Two = 0;
//
//	Copy_Array(Array_One, Array_Two, length, length_Two);
//
//	bool Is_Palindrome = Is_Palindrome_Array(Array_One, Array_Two, length);
//	if (Is_Palindrome)
//	{
//		cout << "\nThe Array is Palindrome\n";
//	}
//	else
//	{
//		cout << "\nThe Array is not Palindrome\n";
//	}
//
//}


#include<iostream>
using namespace std;

int Read_Number(string messag)
{
	int number;
	do
	{
		cout << messag;
		cin >> number;
	} while (number <= 0);
	return number;
}


void Rea_Array(int Array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "\n[" << i + 1 << "] " << "enter the number :\n";
		cin >> Array[i];
	}
}


bool Is_Palindrome_Array(int Array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		if (Array[i] != Array[length -1 -i]) 
		{
			return false;
		}
	}
	return true;
}

int main()
{

	int Array_One[100];
	int length = Read_Number("enter the length : ");

	cout << "\n--- Read Array ---\n";
	Rea_Array(Array_One, length);



	bool Is_Palindrome = Is_Palindrome_Array(Array_One,length);
	if (Is_Palindrome)
	{
		cout << "\nThe Array is Palindrome\n";
	}
	else
	{
		cout << "\nThe Array is not Palindrome\n";
	}

}