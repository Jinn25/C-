#include "head.h"

void playermove(void)
{
	int x = 40, y = 12, ch;
	while (1)
	{
		gotoxy(x, y);
		printf("бс\b\b");

		ch = _getch();

		if (ch == 224)
		{
			ch = _getch();
			switch (ch)
			{
			case DOWN:
				y--;
				break;
			case UP:
				y++;
				break;
			case LEFT:
				x--;
				break;
			case RIGHT:
				x++;
				break;
			}
		}
		system("cls");
	}
}