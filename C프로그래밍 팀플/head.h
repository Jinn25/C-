#include <stdio.h>
#include <windows.h>
#include <conio.h>
#define  UP 80
#define DOWN 72
#define LEFT 75
#define RIGHT 77

void playermove(void);
void gotoxy(int x, int y);
int checkflag(int x, int y, int flag_x, int flag_y);