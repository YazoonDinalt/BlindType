#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

void printToCons(char *string, int len, int right, int sleep) {

	for (int i = 0; i < right; i++) printf(" ");

	for (int i = 0; i < len; i++) {
		Sleep(sleep);
		printf("%c", string[i]);
	}
	printf("\n");
}

void initialize(tmp) {

	system("cls");
	for (int i = 0; i < 10; i++) printf("\n");
	printToCons("HELLO MY DEAR USER", 18, 50, 100 * tmp);
	printToCons("Please, choose what you want to train", 38, 40, 100 * tmp);
	printf("\n");
	printToCons("1. Quick thinking", 17, 45, 50 * tmp);
	printToCons("2. Finger movement speed", 25, 45, 50 * tmp);
}

void trainThink() {
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	int mintime;
	clock_t end;
	clock_t begin;

	srand(time(NULL));
	int randtime = (1 + rand() % 10) * 1000;
	srand(time(NULL));
	int letter = 1 + rand() % 26;
	double time_spent = 0.0;

	Sleep(randtime);
	printf("%c", alphabet[letter]);

	begin = clock();

	while (1) {
		if (_getch() == (int)alphabet[letter]) {
			end = clock();
			break;
		}
	}
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

	printf("The elapsed time is %f seconds", time_spent);

	return 0;


}

int QuickThink() {
	
	system("cls");
	for (int i = 0; i < 3; i++) printf("\n");
	printToCons("A letter will appear on the screen.\nYou need to click on it as quickly as possible", 83, 0, 10);
	Sleep(200);
	printf("You are Ready? (Y/N)\n1. Yes\n2. No");

	int key = _getch();
	printf("%d", key);
	while (1) {
		while (key != 49 && key != 50) key = _getch();

		if (key == 49) {
			printf("In progress!");
			return 0; 
		}
		if (key == 50) return 0;

		key = 0;
	}

}

int main() {
	trainThink();
	//initialize(1);

	//int key = _getch();

	//while (1) {
	//	initialize(0);
	//	while (key != 49 && key != 50 && key != 113) key = _getch();
	//
	//	if (key == 49) QuickThink();
	//	if (key == 50) printf("In progress!");
	//	if (key == 113) return 0;

	//	key = 0;
	//}
}


