#include "head.h"

void gotoxy(int x, int y)
{
	COORD Cur = { x,y };
	printf(" ");
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}