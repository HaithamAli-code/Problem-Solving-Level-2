#include<iostream>
using namespace std;	

int readNumber(){
	int number;
	cout << "Enter a number: ";
	cin >> number;
	return number;
}

int randomNumber(int from , int to){
	return rand() % (to-from +1)+from; 
}

enum enCharType {
	SamallLetter = 1,    // Lowercase letters (ASCII range 97-122)
	CapitalLetter = 2,   // Uppercase letters (ASCII range 65-90)
	SpecialCharacter = 3,// Special characters (ASCII range 33-47)
	Digit = 4            // Digits (ASCII range 48-57)
};

char generateRandomCharacter(enCharType CharType){
	switch (CharType)
	{
	case SamallLetter:
		return char (randomNumber(97,122));
		break;
	case CapitalLetter:
		return char (randomNumber(65,90));
		break;
	case SpecialCharacter:
		return char (randomNumber(33,47));
		break;
	case Digit:
		return char (randomNumber(48,57));
		break;

	}
}

string generateWord(enCharType x,int length) {
	string word = "";
	for (int i = 0; i < length; i++)
	{
		word = word + generateRandomCharacter(x);
	}
	return word;
}

string generateKey() {
	string Key = "";
	Key = Key + generateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + generateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + generateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + generateWord(enCharType::CapitalLetter, 4);
	return Key;
}

void FillArrayWithKey(string Arr[] ,int length) {
	for (int i = 0; i < length; i++)
	{
		Arr[i] = generateKey();
	}
}

void PrintKey(string Arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << "[" << i << "] " << Arr[i] << endl; 
	}
}
int main(){

	srand((unsigned)time(NULL));

	string Arr[100];
	int length = readNumber();

	FillArrayWithKey(Arr, length);
	cout << "==========================" << endl;
	PrintKey(Arr, length);
	cout << "==========================" << endl;


}