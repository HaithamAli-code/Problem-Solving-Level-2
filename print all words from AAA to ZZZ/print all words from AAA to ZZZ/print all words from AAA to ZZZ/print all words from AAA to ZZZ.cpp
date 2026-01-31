#include <iostream>
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

void Print() {

	string word = "";
	for (int i = 65; i <= 90 ; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int x = 65; x <= 90; x++)
			{
				word = "";
				word = word + char(i);
				word = word + char(j);
				word = word + char(x);

				cout <<word
					<<endl;
			}
		}
	}
}

int main()
{
	Print();
}
