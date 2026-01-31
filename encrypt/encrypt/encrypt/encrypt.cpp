#include <iostream>
#include <string>
using namespace std;

string ReadText(string messag)
{
	string text = "";
	cout << messag;
	getline(cin, text);
	return text;
}

string Encrypt(string Text , int key)
{
	for ( int i = 0; i < Text.length(); i++)
	{
		Text[i] = char(int(Text[i]) + key);
	}
	return Text;

}

string beforeEncrypt(string Text, int key)
{
	for (int i = 0; i < Text.length(); i++)
	{
		Text[i] = char(int(Text[i]) - key);
	}
	return Text;

}
int main()
{
	const int key = 2;
	string text = ReadText("enter the text : ");
	string TextEncrypt = Encrypt(text, key);
	string TextAfterEncrypt = beforeEncrypt(TextEncrypt, key);

	cout <<"after Encrypt : " << TextEncrypt << endl;
	cout <<"before Encrypt : " << TextAfterEncrypt <<endl;

}
