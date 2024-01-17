#include "genPlikow.h"
#include <string.h>
#include <wchar.h>
#include <stdio.h>
#include <stdlib.h>

const wchar_t BLACK_SQUARE = L'\u25A0';
const wchar_t WHITE_SQUARE = L'\u25A1';
const wchar_t LEFT_ARROW =L'\u2190';
const wchar_t RIGHT_ARROW =L'\u2192';
const wchar_t UP_ARROW = L'\u2191';
const wchar_t  DOWN_ARROW =L'\u2193';

#define NEWLINE 0x000A

void WypiszDoPliku(int** plansza, int M, int N, int curY, int curX, int curR, char *prefix, int iteracja)
{
	char* stringnumber = malloc(30);
	sprintf(stringnumber, "%d", iteracja);

	int namelength = strlen(prefix) + strlen("_") + strlen(stringnumber) +  + strlen(".txt") + 1;
	char* filename = malloc(namelength);
		
		
	strcpy(filename, prefix);
	strcat(filename, "_");
	strcat(filename, stringnumber);
	strcat(filename, ".txt");

	FILE* file = fopen(filename, "wb");

	for (int y = 0; y < M; y++)
	{
		for (int x = 0; x < N; x++)
		{
			if (y == curY && x == curX)
			{
				if (curR == 0) {
					fputwc(UP_ARROW, file);
				}
				else if (curR == 1) {
					fputwc(RIGHT_ARROW, file);
				}
				else if (curR == 2) {
					fputwc(DOWN_ARROW, file);
				}
				else if (curR == 3) {
					fputwc(LEFT_ARROW, file);
				}
			}
			else if (plansza[y][x] == 0)
			{
				fputwc(WHITE_SQUARE, file);
			}
			else if (plansza[y][x] == 1)
			{
				fputwc(BLACK_SQUARE, file);
			}
		}
		fputwc(NEWLINE, file);
	}
	fclose(file);
}
