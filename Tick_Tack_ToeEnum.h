#pragma once
enum tickTackToeSymb{EMPTY, X, O};
//В файле cpp лежит инициализация значениями с проверкой 
tickTackToeSymb gameField[3][3] = { {},{},{} };

struct Player {
	typedef char playerName[20];
	char playerSymbol;
	unsigned int playerID;
	//число побед в серии игр
	int playerScore;
};

struct GameProperties {
	
	Player people[2];
	//количество игр в серии
	int numberOfGames;
	int winnerID;
	int movesLeft;
	int movesMade;
	char winnerName[20];
	bool bGameStarted;
	bool bGameOver;

	//проверка наличия победителя
	bool bHaveWinner;
	//один из игроков сдался
	bool bGiveUp;
	//проверка доступности ячейки для хода
	bool bIsEmpty;

};