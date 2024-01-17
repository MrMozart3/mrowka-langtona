//#include "mrowka.h"
#include <stdio.h>
#include <getopt.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

void WypiszInstrukcje()
{
 printf("\nProgram symuluje mrowke Langtona i zapisuje kazda iteracje w pliku\n\n");
 printf("Argumenty:\n\n");
 printf("-m <liczba wierszy> (wymagany)\n");
 printf("Warunki: m > 0\n\n");
 printf("-n <liczba kolumn> (wymagany)\n");
 printf("Warunki: n > 0\n\n");
 printf("-i <liczba iteracji> (wymagany)\n");
 printf("Warunki: i > 0\n\n");
 printf("-r <kierunek starowy> (niewymagany)\n");
 printf("0 - gora, 1 - dol, 2 - prawo, 3 - lewo\n\n");
 printf("-p <przedrostek plikow> (niewymagany)\n\n");
 printf("-z <zapelnienie czarnymi procentowo> (niewymagany)\n");
 printf("Warunki 0 <= z <= 100\n");
 printf("-x <poczatkowa pozycja mrowki X> (niewymagany)\n");
 printf("Warunki 0 <= x < N\n\n");
 printf("-y <poczatkowa pozycja mrowki Y> (niewymagany)\n");
 printf("Warunki 0 <= y < M\n");
}

int main(int argc, char* argv[])
{
	
	setlocale(LC_ALL, "C.UTF-8");

	int opt = 0;
	int M = 0;
	int N = 0;
	int I = 0;
	int startY = 0, startX = 0;
	int ustawionyX = 0;
	int ustawionyY = 0;
	char *prefix = "file";
	int startR = 1;
	int fillPercent = 0;

	while (( opt = getopt(argc, argv, "hm:n:i:r:p:z:x:y:")) != -1)
	{
		opterr = 0;
		switch(opt) {
			case 'm':
				M = atoi(optarg);
				if(M < 1){
					printf("Blad w parametrach wywolania\n");
					printf("Po instrukcje uzyj:\n%s -h\n", argv[0]);
					return 1;
				}
				break;
			case 'n':
				N = atoi(optarg);
				if(N < 1){
					printf("Blad w parametrach wywolania\n");
					printf("Po instrukcje uzyj:\n%s -h\n", argv[0]);
					return 1;
				}
				break;
			case 'i':
				I = atoi(optarg);
				if(I < 1){
					printf("Blad w parametrach wywolania\n");
					printf("Po instrukcje uzyj:\n%s -h\n", argv[0]);
					return 1;
				}
				break;
			case 'r':
				startR = atoi(optarg);
				if(startR < 0 || startR > 3){
					printf("Blad w parametrach wywolania\n");
					printf("Po instrukcje uzyj:\n%s -h\n", argv[0]);
					return 1;
				}
				break;
			case 'p':
				prefix = malloc(strlen(optarg) + 1);
				strcpy(prefix, optarg);
				break;
			case 'z':
				fillPercent = atoi(optarg);
				if(fillPercent < 0 || fillPercent > 100){
					printf("Blad w parametrach wywolania\n");
					printf("Po instrukcje uzyj:\n%s -h\n", argv[0]);
					return 1;
				}
				break;
			case 'x':
				startX = atoi(optarg);
				ustawionyX = 1;
				break;
			case 'y':
				startY = atoi(optarg);
				ustawionyY = 1;
				break;	
			case 'h':
				WypiszInstrukcje();
				return 1;
				
				break;
			case '?':
					printf("Blad w parametrach wywolania\n");
					printf("Po instrukcje uzyj:\n%s -h\n", argv[0]);
					return 1;
				
				break;
			default:
				WypiszInstrukcje();
				return 1;
				break;
		}
	}
	
	if(M == 0 || N == 0 || I == 0){
		printf("Brak odpowiednich parametrow\n");
		printf("Po instrukcje uzyj:\n%s -h\n", argv[0]);
		return 1;
	}
	if(startX < 0 || startY < 0 || startX >= N || startY >= M){
		printf("Pozycje startowe sa poza plansza");
		printf("Po instrukcje uzyj:\n%s -h\n", argv[0]);
		return 1;
	}
	if(ustawionyX == 0){
		startX = N / 2;
	}
	if(ustawionyY == 0){
		startY = M / 2;
	}
	
	int** plansza = malloc(M * sizeof(int*));
	for (int i = 0; i < M; i++) plansza[i] = calloc(N, sizeof(int));
	
	//ZapelnijCzarnymi(plansza, M, N, fillPercent);
	//WykonajIteracje(plansza, M, N, I, startY, startX, startR, prefix);
}
