#include "mrowka.h"
//#include "genPlikow.h"
#include <stdlib.h>
#include <time.h>

void WykonajIteracje(int** plansza, int M, int N, int I, int startY, int startX, int startR, char *prefix)
{
	int y[4] = {-1, 0, 1, 0};
	int x[4] = {0, 1, 0, -1};

	int curY = startY, curX = startX, curR = startR;
	for (int i = 0; i < I; i++) 
	{
		//if(i == 0)WypiszDoPliku(plansza, M, N, curY, curX, curR, prefix, i);
		//obrot
		if (plansza[curY][curX] == 0) {
			curR++;
			if (curR > 3) curR = 0;

			plansza[curY][curX] = 1;
		}
		else if (plansza[curY][curX] == 1) {
			curR--;
			if (curR < 0) curR = 3;

			plansza[curY][curX] = 0;
		}
		//ruch
		curY += y[curR];
		curX += x[curR];
		if (curY < 0) {
			curY = M - 1;
		}
		else if (curY == M) {
			curY = 0;
		}
		if (curX < 0) {
			curX = N - 1;
		}
		else if (curX == N) {
			curX = 0;
		}
		

		//WypiszDoPliku(plansza, M, N, curY, curX, curR, prefix, i + 1);
	}

	
}

void ZapelnijCzarnymi(int **plansza, int M, int N, int z)
{
	for (int y = 0; y < M; y++)
	{
		for (int x = 0; x < N; x++)
		{
			if ( (rand() % 100) + 1 <= z ) plansza[y][x] = 1;
		}
	}
}
