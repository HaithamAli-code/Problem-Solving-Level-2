#include<iostream>
#include <ctime>
using namespace std;

// البروتوتايب
//int Round_Number(int from, int to);
//EnChoice GetPlayerChoice();
//EnChoice GetComputerChoice();
//EnResult DetermineRoundResult(StRoundInfo& roundInfo);
//string CasstingChoiceToString(EnChoice choice);
//string CasstingWinerToString(EnResult R);
//void PrintRound(StRoundInfo& roundInfo);
//StGameResult PlayRounds(int Round);
//void Game();


enum EnChoice
{
	STONE = 1,
	PAPER = 2,
	SCISSOR = 3
};

enum EnResult
{
	PLAYER_WIN = 1,
	COMPUTER_WIN = 2,
	DRAW = 3
};

struct StRoundInfo
{
	EnChoice playerChoice = EnChoice::PAPER;
	EnChoice ComputerChoice = EnChoice::PAPER;
	EnResult RoundResult = EnResult::COMPUTER_WIN;
	int RoundNumber = 0;
};

struct StGameResult
{
	int PlayerWinCount = 0;
	int ComputerWinCount = 0;
	int DrawCount = 0;
	EnResult OverallWinner = EnResult::DRAW;
};

int Round_Number(int from , int to)
{
	return rand() % (to - from + 1) + from;
}

EnChoice GetPlayerChoice()
{
	int choice;
	cout << "Enter your choice (1: Stone, 2: Paper, 3: Scissor): ";
	cin >> choice;
	return (EnChoice)choice;
}

EnChoice GetComputerChoice()
{
	return (EnChoice)Round_Number(1, 3);
}

EnResult DetermineRoundResult(StRoundInfo &roundInfo)
{
	if (roundInfo.playerChoice == roundInfo.ComputerChoice)
	{
		return EnResult::DRAW;
	}

	switch (roundInfo.playerChoice)
	{
	case EnChoice::STONE:
		if (roundInfo.ComputerChoice == EnChoice::PAPER)
			return EnResult::COMPUTER_WIN;
		break;
	case EnChoice::PAPER:
		if (roundInfo.ComputerChoice == EnChoice::SCISSOR)
			return EnResult::COMPUTER_WIN;
		break;

	case EnChoice::SCISSOR:
		if (roundInfo.ComputerChoice == EnChoice::STONE)
			return EnResult::COMPUTER_WIN;
		break;
	}
	return EnResult::PLAYER_WIN;
}

string CasstingChoiceToString(EnChoice choice)
{
	switch (choice)
	{
	case EnChoice::PAPER:
		return "Paper";
	case EnChoice::SCISSOR:
		return "Scissor";
	case EnChoice::STONE:
			return "Stone";
	default:
		return "Unknown";
	}
}

string CasstingWinerToString(EnResult R)
{
	switch (R)
	{
	case EnResult::COMPUTER_WIN:
			return "Computer";
		
	case EnResult::PLAYER_WIN:
		return "Player";
		
	case EnResult::DRAW:
		return "Draw";
	default:
		return "Unknown";
	}
}

void Color(StRoundInfo roundInfo)
{
	switch (roundInfo.RoundResult)
	{
	case EnResult::PLAYER_WIN :
		system("Color 2F");
		break;
	case EnResult::COMPUTER_WIN:
		system("Color 4F");
		break;
	case EnResult::DRAW:
		system("Color 6F");
		break;
	}
}

void ResetPage()
{
	system("cls");
	system("Color 0F");

}

void PrintRound(StRoundInfo &roundInfo)
{
	Color(roundInfo);
	cout << "\nPlayer choice: " << CasstingChoiceToString(roundInfo.playerChoice) << "\n";
	cout << "\nComputer choice: " << CasstingChoiceToString(roundInfo.ComputerChoice) << "\n";
	cout << "\nRound Result: " << CasstingWinerToString(roundInfo.RoundResult) << "\n";
	cout << "\n_______________________________________________________\n";

}

StGameResult PlayRounds(int Round)
{
	StRoundInfo roundInfo;
	StGameResult gameResult;
	for (int i = 1; i <= Round; i++)
	{
		roundInfo.RoundNumber = i;
		cout << "\n-------Round [" << roundInfo.RoundNumber << "]-----\n";
		roundInfo.playerChoice = GetPlayerChoice();
		roundInfo.ComputerChoice = GetComputerChoice();
		roundInfo.RoundResult = DetermineRoundResult(roundInfo);

		if (roundInfo.RoundResult == EnResult::PLAYER_WIN){gameResult.PlayerWinCount++;}
		else if (roundInfo.RoundResult == EnResult::COMPUTER_WIN){gameResult.ComputerWinCount++;}
		else{gameResult.DrawCount++;}

		PrintRound(roundInfo);
	}
	return gameResult;
}

void Game()
{
	char playAgain;
	int RoundsToPlay = 0;
	do
	{

		ResetPage();

		cout << "\nHow many rounds do you want to play? \n";
		cin >> RoundsToPlay;

		StGameResult InformationGame = PlayRounds(RoundsToPlay);
		cout << "\n\t\t\t\t\t\t-------End Game-------\n";
		cout << "\n\t\t\t\t\t\tPlayer Win Count: " << InformationGame.PlayerWinCount << "\n";
		cout << "\n\t\t\t\t\t\tComputer Win Count: " << InformationGame.ComputerWinCount << "\n";
		cout << "\n\t\t\t\t\t\tDraw Count: " << InformationGame.DrawCount << "\n";

		cout << "\ndo you want to play the game? (y/n): \n";
		cin >> playAgain;
	} while (playAgain == 'y' ||  playAgain == 'Y');

}

int main()
{
	srand((unsigned)time(NULL));

	Game();
	return 0;
}
