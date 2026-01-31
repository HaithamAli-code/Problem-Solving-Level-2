#include<iostream>
using namespace std;

string ReadText(string messag)
{
	string password = "";
	cout << messag;
	cin >> password;
	return password;
}

bool creatPassword(string password) 
{
	string word = "";
	int counter = 0;
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int x = 65; x <= 90; x++)
			{
				 word = "";
				 word = word + char(i);
				 word = word + char(j);
				 word = word + char(x);
				 counter++;
				 cout <<"[" << counter << "]" << word << endl;
				 if (word == password)
				 {
					 cout << "found after " << counter << " trial";
					 return true;
				 }
			}
		}
	}
	return false;
}

void Print(string password)
{
	bool found = creatPassword(password);
	if (!found)
	{
		cout << "I couldn't find the password ";
	}
}

int main() 
{
	Print(ReadText("enter the password : "));
}