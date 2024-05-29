#include "head.h"

int checkflag(int x, int y, int flag_x, int flag_y)
{
	if (x == flag_x && y == flag_y)
		return 1;
	else return 0;
}