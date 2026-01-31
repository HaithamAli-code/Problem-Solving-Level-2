#include<iostream>
using namespace std;

enum enType {smallLetter = 1 , capitalLetter = 2 , SpecialCharacter = 3, Digit = 4};

int RandomNumber(int from, int to)
{
	return rand() %(to - from + 1) + from;
}

char returnRandom(enType x) {
	switch (x) {
	case enType::smallLetter:
		return  (char)RandomNumber(97,122);
		break;
	case enType::capitalLetter:
		return  (char)RandomNumber(65,90);
		break;
	case enType::SpecialCharacter:
		return  (char)RandomNumber(33,47);
		break;
	case enType::Digit:
		return  (char)RandomNumber(48 , 57);
		break;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	cout << returnRandom(enType::smallLetter) << endl;
	cout << returnRandom(enType::capitalLetter) << endl;
	cout << returnRandom(enType::SpecialCharacter) << endl;
	cout << returnRandom(enType::Digit) << endl;

}