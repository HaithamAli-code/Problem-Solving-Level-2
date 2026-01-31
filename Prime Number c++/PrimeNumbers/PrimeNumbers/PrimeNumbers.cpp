#include <iostream>
using namespace std;
// ما بينقسم إلا على حاله وعلى 1 فقط.
enum enPrimr {Prime =  1 , NotPrime = 2};	

int ReadNumber(string messag) {
	int number;
	do
	{
		cout << messag;
		cin >> number;
	} while (number <= 0);
	return number;
}

enPrimr checkPrime(int number) {

	if (number <= 1)
	{
		return enPrimr::NotPrime;
	}

	int M = round(number / 2);
		for (int i = 2; i < M; i++)
		{
			if (number % i == 0)
			{
				return enPrimr::NotPrime;
			}
		}
		return enPrimr::Prime;
}

void PrintNumber(int number) {
	for (int i = 1; i <= number; i++)
	{
		if (checkPrime(i) == enPrimr::Prime) {
			cout << i << "\n";
		}
	}
}

int main() {

	PrintNumber(ReadNumber("enter the number : "));


	return 0;
}