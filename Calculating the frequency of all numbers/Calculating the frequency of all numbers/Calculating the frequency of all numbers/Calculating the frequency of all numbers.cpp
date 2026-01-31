#include<iostream>
using namespace std;

int ReadNumber(string messag) {
	int number;
	do
	{
		cout << messag;
		cin >> number;
	} while (number <= 0);
	return number;
}

int NumberRepeat(int number , int checkNumber) {
	int Remainder = 0;
	int counter = 0;
	while(number > 0){
		Remainder = number % 10;
		number = number / 10;
		if (Remainder == checkNumber) {
			counter++;
		}
	}
	return counter;
}

void printNumberRepeat(int number) {

	for (int i = 0; i < 10; i++)
	{
		int Repeat = NumberRepeat(number,i);		// chcceck number , number
		if (Repeat > 0)
		{
			cout << "\aThis number " << i << " is repeated " << Repeat << " times\n";
		}
	}

}

int main() {

	printNumberRepeat(ReadNumber("enter the number : "));

	return 0;
}
