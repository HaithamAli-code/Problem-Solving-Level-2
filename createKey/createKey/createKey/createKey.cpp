#include<iostream>
using namespace std;

int RandomNumber(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

int ReadNumber() {
	int number;
	cout << "Pleaes enter how many keys to generate ? \a";
	cin >> number;
	return number;
}

enum enType { smallLetter = 1, capitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

char createRandom(enType x)
{
	switch(x){
	case enType::smallLetter:
		return RandomNumber(97, 122);
		break;
	case enType::capitalLetter:
		return RandomNumber(65,90);
		break;
	case enType::SpecialCharacter:
		return RandomNumber(33,47);
		break;
	case enType::Digit:
		return RandomNumber(48,57);
		break;
	}
}

string creaetWordd(enType x ,int length)
{
	string word = "";
	for (int i = 1; i <= length; i++)
	{
		word =word + createRandom(x);
	}
	return word;
}

string creaetKey()
{
	string key = "";
	key = key + creaetWordd(enType::capitalLetter,4) + "-";
	key = key + creaetWordd(enType::capitalLetter, 4) + "-";
	key = key + creaetWordd(enType::capitalLetter, 4) + "-";
	key = key + creaetWordd(enType::capitalLetter, 4);
	return key;
}

void PrintKey(int Number) {
	int x = 0;
	for (int i = 1; i <= Number; i++)
	{
		x++;
		cout << "[" << x << "]  " << creaetKey() << endl;
	}
}

int main()
{
	int number = ReadNumber();
	PrintKey(number);
}
